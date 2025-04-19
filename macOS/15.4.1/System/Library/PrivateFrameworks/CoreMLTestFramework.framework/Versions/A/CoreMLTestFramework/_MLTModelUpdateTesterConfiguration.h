@class NSString, _MLTLogger, _MLTModelUpdateValidator;

@interface _MLTModelUpdateTesterConfiguration : NSObject

@property (retain) NSString *updateableModelPath;
@property (retain) NSString *recipePath;
@property long long computeUnit;
@property (retain) _MLTLogger *logger;
@property (retain) _MLTModelUpdateValidator *validator;
@property BOOL calculateValidationAccuracyEveryEpochEnd;

- (id)init;
- (void).cxx_destruct;

@end
