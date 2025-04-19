@interface AVB17221AECPAEMGetPTPInstancePathTraceCommand : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short startIndex;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingStartIndex;

- (id)init;
- (void)setStartIndex:(unsigned short)a0;
- (unsigned short)startIndex;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
