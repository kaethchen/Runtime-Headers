@class NSArray;

@interface AVB17221AECPAEMControlIndexMessage : AVB17221AECPAEMDescriptorMessage

@property (copy, nonatomic) NSArray *indicies;

+ (id)keyPathsForValuesAffectingIndicies;

- (id)init;
- (id)indicies;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setIndicies:(id)a0;

@end
