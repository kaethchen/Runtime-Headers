@class NSData;

@interface AVB17221AECPAEMControlValueMessage : AVB17221AECPAEMDescriptorMessage

@property (copy, nonatomic) NSData *valuesData;

+ (id)keyPathsForValuesAffectingValuesData;

- (id)init;
- (id)valuesData;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setValuesData:(id)a0;

@end
