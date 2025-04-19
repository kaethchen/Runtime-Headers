@interface AVB17221AECPAEMGetASPathCommand : AVB17221AECPAEMMessage

@property (nonatomic) unsigned short descriptorIndex;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingDescriptorIndex;

- (id)init;
- (unsigned short)descriptorIndex;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setDescriptorIndex:(unsigned short)a0;

@end
