@interface AVB17221AECPAEMReadDescriptorCommand : AVB17221AECPAEMMessage

@property (nonatomic) unsigned short configurationIndex;
@property (nonatomic) unsigned short descriptorType;
@property (nonatomic) unsigned short descriptorIndex;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingConfigurationIndex;
+ (id)keyPathsForValuesAffectingDescriptorIndex;
+ (id)keyPathsForValuesAffectingDescriptorType;

- (id)init;
- (unsigned short)descriptorType;
- (void)setDescriptorType:(unsigned short)a0;
- (unsigned short)descriptorIndex;
- (unsigned short)configurationIndex;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setConfigurationIndex:(unsigned short)a0;
- (void)setDescriptorIndex:(unsigned short)a0;

@end
