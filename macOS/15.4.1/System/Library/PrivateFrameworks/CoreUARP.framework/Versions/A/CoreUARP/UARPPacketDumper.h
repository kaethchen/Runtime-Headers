@class BloodhoundPacketDumper;

@interface UARPPacketDumper : NSObject {
    BloodhoundPacketDumper *_bloodhoundDumper;
}

- (void).cxx_destruct;
- (id)initWithFileName:(id)a0;
- (void)dump:(id)a0 uuid:(id)a1 uarpStatus:(unsigned int)a2 direction:(unsigned long long)a3;
- (void)dump:(id)a0 accessoryID:(id)a1 uarpStatus:(unsigned int)a2 direction:(unsigned long long)a3;

@end
