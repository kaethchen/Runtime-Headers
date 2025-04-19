@class NSData, AVB17221AEMModelObject;

@interface AVB17221AECPAEMReadWriteDescriptorMessage : AVB17221AECPAEMMessage

@property (copy) AVB17221AEMModelObject *descriptor;
@property (nonatomic) unsigned short configurationIndex;
@property (readonly, nonatomic) unsigned short descriptorType;
@property (readonly, nonatomic) unsigned short descriptorIndex;
@property (copy, nonatomic) NSData *descriptorData;

+ (id)keyPathsForValuesAffectingConfigurationIndex;
+ (id)keyPathsForValuesAffectingDescriptor;
+ (id)keyPathsForValuesAffectingDescriptorData;
+ (id)keyPathsForValuesAffectingDescriptorIndex;
+ (id)keyPathsForValuesAffectingDescriptorType;

- (id)descriptor;
- (void)setDescriptor:(id)a0;
- (unsigned short)descriptorType;
- (id)descriptorData;
- (void)setDescriptorData:(id)a0;
- (unsigned short)descriptorIndex;
- (unsigned short)configurationIndex;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setConfigurationIndex:(unsigned short)a0;

@end
