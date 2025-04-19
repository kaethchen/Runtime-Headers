@class NSArray, NSString;

@interface MLNeuralNetworkFunctionInfo : NSObject

@property (readonly, nonatomic) BOOL isClassifier;
@property (readonly, copy, nonatomic) NSArray *classLabels;
@property (readonly, copy, nonatomic) NSString *classScoreVectorName;
@property (readonly, copy, nonatomic) NSArray *outputNames;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCompiledModelArchive:(void *)a0 compilerVersionInfo:(id)a1 error:(id *)a2;

@end
