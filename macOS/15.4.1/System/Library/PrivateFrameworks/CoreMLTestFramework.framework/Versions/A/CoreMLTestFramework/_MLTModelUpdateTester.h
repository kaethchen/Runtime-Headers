@class NSError, NSString, _MLTModelUpdateTestDataProvider, MLModel, MLUpdateTask, MLUpdateProgressHandlers, _MLTLogger, NSDictionary, _MLTModelUpdateValidator, NSObject;
@protocol MLWritable, OS_dispatch_semaphore;

@interface _MLTModelUpdateTester : NSObject

@property (retain, nonatomic) NSString *updateableModelPath;
@property (retain, nonatomic) NSString *recipePath;
@property (retain, nonatomic) _MLTModelUpdateTestDataProvider *trainingDataProvider;
@property (retain, nonatomic) _MLTModelUpdateValidator *validator;
@property (retain, nonatomic) _MLTLogger *logger;
@property (nonatomic) long long computeUnit;
@property (retain, nonatomic) MLUpdateTask *updateTask;
@property (copy, nonatomic) NSDictionary *validationParams;
@property (retain, nonatomic) NSString *errorString;
@property (retain, nonatomic) NSString *modelType;
@property (retain, nonatomic) NSDictionary *runtimeParams;
@property (retain) MLUpdateProgressHandlers *updateProgressHandlers;
@property (retain) NSError *modelUpdateError;
@property (retain, nonatomic) MLModel<MLWritable> *updatedModel;
@property (nonatomic) BOOL finishedTesting;
@property (nonatomic) long long currentEpoch;
@property (readonly) NSObject<OS_dispatch_semaphore> *sema;
@property BOOL completionHandlerCalled;
@property (retain) NSError *error;
@property (retain) NSError *testError;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id /* block */)_completionHandlerBlock;
- (id /* block */)_progressHandlerBlock;
- (BOOL)runModelUpdateTest:(id *)a0;
- (id)runTimeParamsFromConfigurationDict:(id)a0 error:(id *)a1;
- (id)validationParamsFromConfigurationDict:(id)a0 error:(id *)a1;
- (BOOL)writeUpdatedModelToPath:(id)a0 error:(id *)a1;

@end
