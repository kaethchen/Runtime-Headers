@interface AVB17221AECPAEMMemoryObjectLengthMessage : AVB17221AECPAEMMessage

@property (nonatomic) unsigned short descriptorIndex;
@property (nonatomic) unsigned short configurationIndex;
@property (nonatomic) unsigned long long length;

+ (id)keyPathsForValuesAffectingConfigurationIndex;
+ (id)keyPathsForValuesAffectingDescriptorIndex;
+ (id)keyPathsForValuesAffectingLength;

- (unsigned long long)length;
- (void)setLength:(unsigned long long)a0;
- (unsigned short)descriptorIndex;
- (unsigned short)configurationIndex;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setConfigurationIndex:(unsigned short)a0;
- (void)setDescriptorIndex:(unsigned short)a0;

@end
