@class NSString, NSError, _TtC26SensitiveContentAnalysisML34SCMLVisualGenerationHandlingResult;

@interface SensitiveContentAnalysisML.SCMLVisualGenerationHandling : NSObject {
    void /* unknown type, empty encoding */ tokenGen;
    void /* unknown type, empty encoding */ localeIdentifier;
    void /* unknown type, empty encoding */ logger;
}

@property (class, nonatomic, readonly) BOOL allowImplicitDetections;

- (id)init;
- (void).cxx_destruct;
- (id)initOnBehalfOf:(long long)a0 modelManagerServicesUseCaseID:(id)a1 locale:(id)a2 error:(id *)a3;
- (void)predictWithText:(NSString *)a0 completionHandler:(void (^)(_TtC26SensitiveContentAnalysisML34SCMLVisualGenerationHandlingResult *, NSError *))a1;

@end
