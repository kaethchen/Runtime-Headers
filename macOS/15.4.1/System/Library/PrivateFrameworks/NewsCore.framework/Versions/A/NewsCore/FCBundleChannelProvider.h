@class NSArray, NSString, FCKeyValueStore, NFUnfairLock;
@protocol FCContentContext, FCBundleChannelProviderDelegate, FCCoreConfigurationManager;

@interface FCBundleChannelProvider : NSObject <FCAppActivityObserving, FCBundleChannelProviderType> {
    FCKeyValueStore *_localStore;
    NFUnfairLock *_accessLock;
    id<FCCoreConfigurationManager> _configurationManager;
    id<FCContentContext> _contentContext;
}

@property (copy, nonatomic) NSArray *bundleChannelIDs;
@property (copy, nonatomic) NSString *bundleChannelIDsVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FCBundleChannelProviderDelegate> delegate;

- (void).cxx_destruct;
- (void)activityObservingApplicationWindowWillBecomeForeground;
- (void)loadInitialBundleChannelIDsWithCompletion:(id /* block */)a0;

@end
