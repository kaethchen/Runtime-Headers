@class NSData;

@interface AVB17221AECPAEMStartOperationMessage : AVB17221AECPAEMOperationMessage

@property (copy, nonatomic) NSData *values;

+ (id)keyPathsForValuesAffectingValues;

- (id)values;
- (void)setValues:(id)a0;

@end
