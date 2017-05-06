Marshall Lindsay
Max Houck
ECE3220 Final Project

Operating system:
	Windows only

To compile: 
	You will need to compile all .cpp files together with the 
	-lgdi32 option.
	
	for example:
		g++ .\main.cpp .\tires.cpp .\CarGraphics.cpp .\Serial.cpp -o FinalProject -lgdi32
		
During runtime:
	NOTE: there are 4 different data files:
	frontLeft.txt
	frontRight.txt
	rearLeft.txt
	rearRight.txt
	
	The frontLeft.txt contains generated data to produce good gradient simulation. It
is recommended to use this file as the data input for every tire when first running the program.
The data range is 0 - 110 degress C (this is the default for the graphics simulation).
	The frontRight.txt contains generated data to produce good gadient simulation. Unlike
frontLeft.txt, this file has a data range from 55 - 110 degrees C. You will need to change
the temperature range to see a good gradient.
	The other two data files contain random data.
	
	For the real-time portion of this program you will need an Arduino set to COM4 reading 
MLX90614 infrared sensor accross an I2C bus. These sensors will need the addresses 0x0A,
0x0B and 0x0C for the attached arduino code to work.
	Please refer to the MLX90614 datasheet for proper harware setup.
	
***********IMPORTANT******************
	When the user is prompted to change the graphical interface, do not enter erroneous data, 
	ie anything other than integers or doubles. There is no error handling during these menus
	and it will cause the program to fail.
	