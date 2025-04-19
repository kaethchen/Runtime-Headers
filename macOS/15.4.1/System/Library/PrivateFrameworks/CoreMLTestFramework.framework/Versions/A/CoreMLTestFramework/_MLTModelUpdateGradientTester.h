@class MLUpdateProgressHandlers, NSString, MLModel, _MLTLogger, NSError, _MLTJSONReader;
@protocol MLUpdatable;

@interface _MLTModelUpdateGradientTester : NSObject

@property (retain, nonatomic) NSString *updateableModelPath;
@property (retain, nonatomic) NSString *recipePath;
@property (retain, nonatomic) _MLTLogger *logger;
@property (retain, nonatomic) MLModel<MLUpdatable> *updatebleModel;
@property (retain) MLUpdateProgressHandlers *updateProgressHandlers;
@property (retain) NSError *updatableModelError;
@property (retain, nonatomic) _MLTJSONReader *jsonReader;
@property (retain, nonatomic) NSString *errorString;
@property (retain, nonatomic) NSString *modelType;
@property (nonatomic) long long computeUnit;
@property (nonatomic) BOOL verbose;
@property (retain) NSError *testError;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id /* block */)_completionHandlerBlock;
- (id /* block */)_progressHandlerBlock;
- (BOOL)compareGradient:(id)a0 withExpectedGradients:(id)a1 gradientName:(id)a2 error:(id *)a3;
- (id)logStringForMultiArray:(id)a0;
- (BOOL)runModelUpdateGradientTest:(id *)a0;

@end
