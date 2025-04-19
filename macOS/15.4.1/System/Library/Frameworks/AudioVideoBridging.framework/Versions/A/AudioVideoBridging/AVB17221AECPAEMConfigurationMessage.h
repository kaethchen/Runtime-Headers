@interface AVB17221AECPAEMConfigurationMessage : AVB17221AECPAEMMessage

@property (nonatomic) unsigned short configurationIndex;

+ (id)keyPathsForValuesAffectingConfigurationIndex;

- (unsigned short)configurationIndex;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setConfigurationIndex:(unsigned short)a0;

@end
