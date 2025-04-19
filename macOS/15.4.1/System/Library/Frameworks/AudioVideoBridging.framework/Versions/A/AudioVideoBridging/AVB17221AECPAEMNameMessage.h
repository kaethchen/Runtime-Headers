@class NSString;

@interface AVB17221AECPAEMNameMessage : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short nameIndex;
@property (nonatomic) unsigned short configurationIndex;
@property (copy, nonatomic) NSString *name;

+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingConfigurationIndex;
+ (id)keyPathsForValuesAffectingNameIndex;

- (id)name;
- (void)setName:(id)a0;
- (unsigned short)configurationIndex;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (unsigned short)nameIndex;
- (void)setConfigurationIndex:(unsigned short)a0;
- (void)setNameIndex:(unsigned short)a0;

@end
