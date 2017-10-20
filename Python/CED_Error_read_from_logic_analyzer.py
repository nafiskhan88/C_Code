import sys, os


File_Buffer = open("250.csv", 'r') 

raw_filename = File_Buffer.name

filename_length= len (raw_filename)

desired_filename = raw_filename[:(filename_length-4)]

new_write_filename = desired_filename + 'CED Error'+'.txt'

print new_write_filename

file_write =open(new_write_filename,'w')

count = 0;
f = open(raw_filename, 'r')


for line in f:
    if "Setup Read to [0xA9] + ACK" in line:
        for i in range(6):
                count = count + 1
                nextline = (next(f, '').strip()).split(',')
                time  = nextline[0]
                error = nextline[2].split('+')
                byte = error[0]
                error1 =byte.split('0x')
                ced_error = error1[1].strip()
                line_write = time +' ' + ced_error + '\n'
                #print line_write.strip()
                print map(int, ced_error)
                file_write.write(line_write)
                if i == 5:
                        print '\n'
                        file_write.write('\n')



print type(ced_hex)