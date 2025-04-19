@class NSMutableArray, TRICovariate;

@interface TRIPredicate : TRIPBMessage

@property (readonly, nonatomic) int targetingKeyOneOfCase;
@property (nonatomic) int systemVariable;
@property (retain, nonatomic) TRICovariate *covariate;
@property (nonatomic) int operation;
@property (nonatomic) BOOL hasOperation;
@property (retain, nonatomic) NSMutableArray *operandArray;
@property (readonly, nonatomic) unsigned long long operandArray_Count;

+ (id)descriptor;

@end
