void printf(char* str)
{
    unsigned short* VideoMemory = (unsigned short*)0xb8000;
    
    for(int i = 0; str[i] !='\0'; ++i)
    {
        VideoMemory[i]= (VideoMemory[i] & 0xFF00) | str[i];
    }
        
}

exern "C" void kernalMain(void * multiboot_structure, unsigned int magicnumber)
{
    printf("Hello MashWareOS kernal ! --- http://");
    while(1);
}
