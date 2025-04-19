@class AVBMACAddress;

@interface AVBMSRPTalkerAttribute : NSObject <NSCopying>

@property (nonatomic) unsigned long long streamID;
@property (copy) AVBMACAddress *destinationMAC;
@property (nonatomic) unsigned short vlanID;
@property (nonatomic) unsigned short maximumFrameSize;
@property (nonatomic) unsigned short maximumFramesPerInterval;
@property (nonatomic) unsigned char priority;
@property (nonatomic) unsigned char rank;
@property (nonatomic) unsigned int accumulatedLatency;
@property (nonatomic) unsigned long long failureBridgeID;
@property (nonatomic) unsigned char failureCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned int)bandwidthForTrafficClass:(unsigned char)a0;

@end
