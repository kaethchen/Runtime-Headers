@interface AVB17221AECPAEMGetPTPInstancePathCountResponse : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short traceCount;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingTraceCount;

- (id)init;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setTraceCount:(unsigned short)a0;
- (unsigned short)traceCount;

@end
