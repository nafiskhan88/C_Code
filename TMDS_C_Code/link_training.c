case 12:
        {
            BYTE B_Buf[2];
            BYTE B_Result = FALSE;

            if ((BYTE)GetParam(0)==1)
            {
                B_Buf[0] = 0x40;
                B_Buf[1] = 0x01;

                // phyang 01/16/2014:
                B_Result = Tx_Fe_AuxI2CWrite(0x40, B_Buf, 2, TRUE);

                B_Result = TRUE; //JC_Debugging Purpose

                // if(Tx_Fe_AuxI2CWrite(0x40,B_Buf,2,TRUE)==TRUE)
                if (B_Result == TRUE)
                {
                    gm_Print_C("Switch to PCON mode-Debugging !!!");
                }
                else
                {
                    gm_Print_C("AUX I2C write Fail");
                }
            }
            else
            {
                B_Buf[0] = 0x40;
                B_Buf[1] = 0x00;

                // phyang 01/16/2014:
                B_Result = Tx_Fe_AuxI2CWrite(0x40, B_Buf, 2, TRUE);

                // if(Tx_Fe_AuxI2CWrite(0x40,B_Buf,2,TRUE)==TRUE)
                if (B_Result == TRUE)
                {
                    gm_Print_C("Switch to LS mode");
                }
                else
                {
                    gm_Print_C("AUX I2C write Fail");
                }
            }

            // phyang 01/16/2014:
            if (B_Result)
            {
                DP_HDMI_TX_Switch(B_Buf[1]);
                gm_Delay1ms(100);
                //PrintSinkInfo();
                //DPTX_GetEdid(GlobalEdidBuf);
                InternalPatternEnableAgain = TRUE;
                if (B_Buf[1])
                {
                    U16 ReTryTime = 100;
                    U8  Ret = FALSE;

                    while (ReTryTime--)
                    {


                        B_Buf[0] = 0x41; // start from 0
                        B_Buf[1] = 0;

                        if (Tx_Fe_AuxI2CWrite(0x40, B_Buf, 1, FALSE) == TRUE)
                        {
                            if (gm_DpTxAuxI2CRead(0x40, &B_Buf[1], 1, TRUE) == TRUE)
                            {
                                if (B_Buf[1] == 1)
                                {
                                    Ret = TRUE;
                                    break;
                                }
                            }
                        }

                        if (Ret == FALSE)
                        {
                            gm_Delay1ms(20);
                            gm_Print_C("Wait..1", 0);
                        }
                    }

                    ReTryTime = 100;
                    while (ReTryTime--)
                    {
                        U8 Value_8 = 0;
                        if (Tx_Fe_AuxDpcdRead(0x0000, &Value_8, sizeof(Value_8)) == DP_TRUE)
                            break;
                        else
                        {
                            gm_Delay1ms(20);
                            gm_Print_C("Wait..2", 0);
                        }
                    }
                    gm_Print_C("Re-Start LT");
                    //gm_Delay1ms(500);

                    Tx_Fe_LinkTrainingStart(0);
                }
            }

        }