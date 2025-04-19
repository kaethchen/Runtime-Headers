@class ATCRTBloodhoundPacketDumper;

@interface AppleTypeCPacketDumper : NSObject {
    ATCRTBloodhoundPacketDumper *_dumper;
}

- (void).cxx_destruct;
- (id)initWithFileName:(id)a0;
- (void)dumpCommand:(id)a0;
- (void)dumpResponse:(id)a0;

@end
