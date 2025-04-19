@class _TtC25CloudSubscriptionFeatures7GMOptIn;

@interface CloudSubscriptionFeatures.GMOptIn : NSObject <CloudSubscriptionFeatures.GMOptInProtocol> {
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ availabilityClient;
    void /* unknown type, empty encoding */ bundleIdentifier;
}

@property (class, nonatomic, readonly) _TtC25CloudSubscriptionFeatures7GMOptIn *current;
@property (class, nonatomic, readonly) _TtC25CloudSubscriptionFeatures7GMOptIn *shared;

@property (nonatomic) BOOL isOptedIn;
@property (nonatomic, readonly) long long state;

- (id)init;
- (void).cxx_destruct;

@end
