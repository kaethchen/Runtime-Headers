@interface AVB17221AECPAEMGetMemoryObjectLengthCommand : AVB17221AECPAEMMessage

@property (nonatomic) unsigned short descriptorIndex;
@property (nonatomic) unsigned short configurationIndex;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingConfigurationIndex;
+ (id)keyPathsForValuesAffectingDescriptorIndex;

- (id)init;
- (unsigned short)descriptorIndex;
- (unsigned short)configurationIndex;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setConfigurationIndex:(unsigned short)a0;
- (void)setDescriptorIndex:(unsigned short)a0;

@end
