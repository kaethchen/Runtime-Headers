@interface AATrackingConsent : NSObject {
    void /* unknown type, empty encoding */ accessGroup;
    void /* unknown type, empty encoding */ consented;
}

@property (class, nonatomic, readonly) AATrackingConsent *shared;

- (id)init;
- (void).cxx_destruct;
- (void)pop;
- (void)push;
- (void)allow;

@end
