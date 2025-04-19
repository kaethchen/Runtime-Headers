@interface AVB17221AECPAppleAEMExtensionDescriptorMessage : AVB17221AECPAppleAEMExtensionMessage

@property (nonatomic) unsigned short descriptorType;
@property (nonatomic) unsigned short descriptorIndex;

+ (id)keyPathsForValuesAffectingDescriptorIndex;
+ (id)keyPathsForValuesAffectingDescriptorType;

- (id)init;
- (unsigned short)descriptorType;
- (void)setDescriptorType:(unsigned short)a0;
- (unsigned short)descriptorIndex;
- (void)setDescriptorIndex:(unsigned short)a0;

@end
