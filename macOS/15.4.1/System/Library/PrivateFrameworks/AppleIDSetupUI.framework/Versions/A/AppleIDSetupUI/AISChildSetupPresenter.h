@interface AISChildSetupPresenter : NSObject {
    void /* unknown type, empty encoding */ settings;
    void /* unknown type, empty encoding */ currentStep;
    void /* unknown type, empty encoding */ childSetupAnalyticsEvent;
    void /* unknown type, empty encoding */ analytics;
    void /* unknown type, empty encoding */ biome;
    void /* unknown type, empty encoding */ familyCircleProvider;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ presentationHandler;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ childSetupStore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startFlowWithViewControllerPresentationHandler:(id)a0;

@end
