@interface AVB17221AECPAEMGetPathLatencyResponse : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned int pathLatency;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingPathLatency;

- (id)init;
- (void)setPathLatency:(unsigned int)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (unsigned int)pathLatency;

@end
