@interface AACClient.AECAssessmentSession : NSObject {
    void /* unknown type, empty encoding */ stateAntiphony;
    void /* unknown type, empty encoding */ taskQueue;
    void /* unknown type, empty encoding */ policyBundleFactory;
    void /* unknown type, empty encoding */ configurationValidator;
    void /* unknown type, empty encoding */ policySession;
    void /* unknown type, empty encoding */ updateSubscription;
    void /* unknown type, empty encoding */ policySessionPrimitives;
}

@property (class, nonatomic, readonly) BOOL supportsMultiAppConfiguration;

@property (nonatomic, retain) void /* unknown type, empty encoding */ configuration;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) BOOL isActive;

- (id)init;
- (void).cxx_destruct;
- (void)end;
- (void)begin;
- (void)updateWithConfiguration:(id)a0;
- (id)initWithConfiguration:(id)a0 queue:(id)a1;

@end
