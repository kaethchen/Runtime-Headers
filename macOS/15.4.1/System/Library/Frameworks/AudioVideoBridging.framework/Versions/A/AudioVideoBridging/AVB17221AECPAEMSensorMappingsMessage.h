@class NSArray;

@interface AVB17221AECPAEMSensorMappingsMessage : AVB17221AECPAEMDescriptorMessage

@property (copy, nonatomic) NSArray *mappings;

+ (id)keyPathsForValuesAffectingMappings;

- (id)mappings;
- (void)setMappings:(id)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
