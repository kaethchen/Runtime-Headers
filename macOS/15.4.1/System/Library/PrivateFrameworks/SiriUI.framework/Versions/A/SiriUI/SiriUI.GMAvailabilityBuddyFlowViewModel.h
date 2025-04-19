@interface SiriUI.GMAvailabilityBuddyFlowViewModel : NSObject {
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ waitlistFailureAlert;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) BOOL optInReady;
@property (nonatomic, readonly) BOOL joinWaitlistReady;

- (id)init;
- (void).cxx_destruct;
- (void)userDidClickContinue;

@end
