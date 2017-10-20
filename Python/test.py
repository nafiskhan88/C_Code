
#a = 'geeks for geeks for geeks aaa'

#testcase = int(input())

#for i in range(testcases):
    #n = int(input())
    #string = (input())
    string = 'dz dz dz dz dz dz dz dz dz dz dz dz dz dz dz dz dz dz dz dz jkzrwrhdn jkzrwrhdn jkzrwrhdn jkzrwrhdn jkzrwrhdn jkzrwrhdn jkzrwrhdn jkzrwrhdn jkzrwrhdn jkzrwrhdn ocmhakokzse ocmhakokzse ocmhakokzse ocmhakokzse ocmhakokzse ocmhakokzse ocmhakokzse ocmhakokzse ocmhakokzse ocmhakokzse ocmhakokzse ocmhakokzse ocmhakokzse ocmhakokzse ocmhakokzse ocmhakokzse ocmhakokzse qv qv qv qv qv qv qv qv qv qv qv qv qv qv xceio xceio xceio xceio xceio xceio xceio xceio xceio xceio xceio xceio xceio yjplyx yjplyx yjplyx yjplyx yjplyx yjplyx yjplyx yjplyx yjplyx ljcwaoxuut ljcwaoxuut ljcwaoxuut ljcwaoxuut ljcwaoxuut ljcwaoxuut ljcwaoxuut ljcwaoxuut ljcwaoxuut ljcwaoxuut ljcwaoxuut ljcwaoxuut rofoslwh rofoslwh rofoslwh rofoslwh rofoslwh rofoslwh rofoslwh rofoslwh rofoslwh rofoslwh rofoslwh rofoslwh rofoslwh rofoslwh rofoslwh'
    string_dict = dict()


    b = string.split()

    for string in b:
        if string not in string_dict:
            string_dict[string] = 1
        else:
            string_dict [string] += 1

    c = sorted(string_dict)

    print c[1]

