@class NSString;

@interface RPNWActivityMessageMetrics : RPNWActivityMetrics

@property (nonatomic) int messageType;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) int linkType;
@property (retain, nonatomic) NSString *peerDeviceModel;
@property (readonly, nonatomic) NSString *peerOSVersion;

+ (id)startMessageMetrics:(int)a0 withParent:(id)a1;

- (void).cxx_destruct;
- (id)_metricsDictionary;
- (void)setPeerOSVersion:(struct { long long x0; long long x1; long long x2; })a0;

@end
