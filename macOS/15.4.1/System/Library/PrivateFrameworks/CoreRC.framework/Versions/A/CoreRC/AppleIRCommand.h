@interface AppleIRCommand : IRCommand

@property (readonly, nonatomic) unsigned short vendorID;
@property (readonly, nonatomic) unsigned char deviceUID;
@property (readonly, nonatomic) unsigned char commandPage;
@property (readonly, nonatomic) unsigned char commandID;
@property (readonly, nonatomic) unsigned short token;
@property (readonly, nonatomic) unsigned long long command;
@property (readonly, nonatomic) BOOL isA39PlayPauseSelect;
@property (readonly, nonatomic) BOOL isB39PlayPauseOrSelect;
@property (readonly, nonatomic) BOOL isB39Command;
@property (readonly, nonatomic) BOOL isStackshotRequest;
@property (readonly, nonatomic) BOOL isPairingRequest;
@property (readonly, nonatomic) BOOL isUnpairingRequest;
@property (readonly, nonatomic) BOOL isBTLEDiscoveryModeRequest;

+ (BOOL)matchNECVendorID:(unsigned short)a0;

- (id)description;
- (unsigned long long)command;
- (BOOL)getVendorSpecificHIDUsagePage:(unsigned int *)a0 usageID:(unsigned int *)a1 ignoreRepeats:(BOOL *)a2;
- (id)initWithPayload:(unsigned long long)a0 repeat:(BOOL)a1;
- (BOOL)isA39PlayPauseSelect;
- (BOOL)isB39Command;
- (BOOL)isB39PlayPauseOrSelect;
- (BOOL)isBTLEDiscoveryModeRequest;
- (BOOL)isPairingRequest;
- (BOOL)isStackshotRequest;
- (BOOL)isUnpairingRequest;

@end
