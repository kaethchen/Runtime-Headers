@class NSString, NSArray, CNLaunchServices, NSSet, NSDictionary, NSNumber, TUCallProviderManager;

@interface CNTUCallProviderManager : NSObject <CNTUCallProviderManager>

@property (retain, nonatomic) CNLaunchServices *launchServices;
@property (retain, nonatomic) NSArray *thirdPartyDefaultAppCallProvidersCache;
@property (retain, nonatomic) NSArray *otherThirdPartyCallProvidersCache;
@property (retain, nonatomic) NSSet *defaultCallingAppsBundleIdentifiersCache;
@property (retain, nonatomic) NSDictionary *defaultCallingAppsBundleIdentifierScorerCache;
@property (retain, nonatomic) NSDictionary *defaultVideoAppsBundleIdentifierScorerCache;
@property (retain, nonatomic) NSNumber *hasDefaultCallProviderCache;
@property (copy, nonatomic) TUCallProviderManager *callProviderManager;
@property (readonly, copy, nonatomic) NSDictionary *defaultCallingAppsBundleIdentifierScorer;
@property (readonly, copy, nonatomic) NSDictionary *defaultVideoAppsBundleIdentifierScorer;
@property (readonly, nonatomic) BOOL hasDefaultCallProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)createDefaultCallingAppsBundleIdentifierScorer:(id)a0;
- (id)defaultVideoAppsBundleIdentifierScorerImpl;
- (void)emptyDefaultAppsCaches;
- (id)hasDefaultCallProviderImpl;
- (BOOL)isActionType:(id)a0 supportedByProvider:(id)a1;
- (BOOL)isFirstPartyCallProvider:(id)a0;
- (id)observableForCallProvidersChangedWithSchedulerProvider:(id)a0;
- (id)otherThirdPartyCallProviders;
- (id)otherThirdPartyCallProvidersImpl;
- (id)providerManagerQueue;
- (id)thirdPartyCallProviderWithBundleIdentifier:(id)a0;
- (id)thirdPartyCallProvidersForActionType:(id)a0;
- (id)thirdPartyDefaultAppCallProviders;
- (id)thirdPartyDefaultAppCallProvidersImpl;

@end
