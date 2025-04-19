@class ATCRTBloodhoundPacketDumper;

@interface AppleTypeCRetimerFifoDumper : NSObject {
    ATCRTBloodhoundPacketDumper *_dumper;
}

- (void).cxx_destruct;
- (void)dumpAccessForRegisterAddress:(unsigned char)a0 ioReturn:(unsigned int)a1 data:(id)a2;
- (id)initWithBloodhoundDumper:(id)a0;

@end
