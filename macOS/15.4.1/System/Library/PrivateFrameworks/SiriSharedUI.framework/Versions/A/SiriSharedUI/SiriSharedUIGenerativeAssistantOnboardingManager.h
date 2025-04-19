@interface SiriSharedUIGenerativeAssistantOnboardingManager : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ window;
}

+ (id)symbolName;
+ (id)modelName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)presentOnboardingFlowForCommand:(id)a0;
- (void)presentOnboardingFlow;

@end
