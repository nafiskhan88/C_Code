U16 value;
U16 ErrorCount_16;
U32 SinkCount_DPCD;    

#define DPRX_ERR_CNT_SEL                      0X06



SinkCount_DPCD = gm_DPCD_ReadBYTE(DPRX_DPCD_BASE_ADDRESS+ 0x200);

if (SinkCount_DPCD == 1)
{
    gm_DPCD_WriteBYTE(DPRX_DPCD_SINK_COUNT, 0x00);
    DPRX_HpdPulse(100); //us
    gm_Delay1ms(2000); 
    gm_DPCD_WriteBYTE(DPRX_DPCD_SINK_COUNT, 0x01);
    DPRX_HpdPulse(100);
    
    gm_Delay1ms(5000); 
    
    
    CLEAR_REG_BITS_U32(DP12RX_ERR_CNT_CTRL, DPRX_ERR_CNT_EN);
    CLEAR_AND_SET_BITS_U32(DP12RX_ERR_CNT_CTRL, DPRX_ERR_CNT_SEL, (Lane_8 << 1));    //CLEAR_AND_SET_BITS_U32(RegAddr_16, AndData_32, OrData_32)
    
    
    
    

}




ErrorCount_16 = READ_REG0_U16(DP12RX_ERROR_CNT);

     
SET_REG_BITS_U32(DP12RX_ERR_CNT_CTRL, DPRX_ERR_CNT_EN);

