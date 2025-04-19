@class NSArray;

@interface AVB17221AECPAEMAudioMappingsMessage : AVB17221AECPAEMDescriptorMessage

@property (copy, nonatomic) NSArray *mappings;

+ (id)keyPathsForValuesAffectingMappings;

- (id)mappings;
- (void)setMappings:(id)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
