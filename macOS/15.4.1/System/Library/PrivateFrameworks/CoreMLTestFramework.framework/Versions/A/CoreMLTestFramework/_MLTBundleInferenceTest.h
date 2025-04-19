@class NSError, NSString;

@interface _MLTBundleInferenceTest : NSObject

@property (nonatomic) BOOL testExecuted;
@property (retain, nonatomic) NSError *testError;
@property (retain, nonatomic) NSString *modelPath;
@property (retain, nonatomic) NSString *testDataPath;

- (void).cxx_destruct;
- (id)initWithModelPath:(id)a0 testData:(id)a1;

@end
