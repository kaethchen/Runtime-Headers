@class NSData;

@interface CBControllerLowPowerModeParams : NSObject <CUXPCCodable>

@property (nonatomic) unsigned char actionType;
@property (copy, nonatomic) NSData *dataBlob;
@property (copy, nonatomic) NSData *dataMask;
@property (nonatomic) unsigned short configFlags;
@property (nonatomic) unsigned short scanDelayStart;
@property (nonatomic) unsigned short scanWindow;
@property (nonatomic) unsigned short scanInterval;
@property (nonatomic) unsigned short scanDuration;
@property (nonatomic) unsigned short nextScanDelay;
@property (nonatomic) unsigned short numberOfDelayIterations;
@property (nonatomic) char rssiThresholdValue;
@property (nonatomic) unsigned char packetLength;
@property (nonatomic) unsigned char deviceIDAdvScanCount;
@property (nonatomic) unsigned char deviceIDLength;
@property (copy, nonatomic) NSData *deviceIDInfo;
@property (copy, nonatomic) NSData *deviceIDInputKeyMaterial;
@property (copy, nonatomic) NSData *deviceIDSalt;
@property (nonatomic) unsigned char deviceIDTimestampEffectiveBits;
@property (nonatomic) unsigned char deviceIDTimestampFrequency;
@property (nonatomic) unsigned char deviceIDTimestampLsbsTruncated;
@property (nonatomic) unsigned short gpioAssertionTime;
@property (copy, nonatomic) NSData *deviceIDDiagInfo;
@property (nonatomic) unsigned char deviceIDDiagLength;
@property (nonatomic) unsigned char diagnosticTxAdvBackoff;
@property (nonatomic) unsigned char diagnosticTxAdvDuration;
@property (nonatomic) unsigned short diagnosticTxAdvInterval;
@property (copy, nonatomic) NSData *macKeyDiagInfo;
@property (nonatomic) unsigned char macKeyDiagLength;
@property (nonatomic) unsigned int maxClockDriftSeconds;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
