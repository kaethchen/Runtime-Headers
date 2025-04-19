@class NSData;

@interface AVB17221AECPAEMMatrixValueMessage : AVB17221AECPAEMMatrixMessage

@property (copy, nonatomic) NSData *valuesData;

+ (id)keyPathsForValuesAffectingValuesData;

- (id)valuesData;
- (void)setValuesData:(id)a0;

@end
