@class NSDictionary;

@interface AppStoreKit.ASKGlobal : NSObject <AppStoreKit.ASKGlobalExports> {
    void /* unknown type, empty encoding */ props;
    void /* unknown type, empty encoding */ ads;
    void /* unknown type, empty encoding */ onDeviceSearchHistoryManager;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ client;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ loc;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ adsLoc;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ storeMetrics;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ amsEngagement;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ user;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ metricsIdentifiers;
@property (nonatomic, readonly) NSDictionary *props;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ featureFlags;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ clientOrdering;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ personalizationStore;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ resilientDeepLinks;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ arcade;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ gameCenter;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ appleSilicon;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ storage;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ onDeviceRecommendationsManager;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ timeoutManager;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ treatmentStore;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ userDefaults;

- (id)init;
- (void).cxx_destruct;

@end
