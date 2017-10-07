from time import sleep
last_data = ''
while(1):
    input_file_data = open("question.txt", 'r').read().rstrip('\n')
    if(input_file_data != last_data):
        # code to update the question to vhdl
        print(input_file_data)
    last_data = input_file_data
    sleep(2)
