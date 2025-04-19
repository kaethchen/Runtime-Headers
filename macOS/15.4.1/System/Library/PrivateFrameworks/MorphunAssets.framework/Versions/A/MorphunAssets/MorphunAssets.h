@class NSMutableDictionary, NSString, UAFAssetSetObserver, NSLock, NSUserDefaults;

@interface MorphunAssets : NSObject

@property (retain, nonatomic) NSUserDefaults *subscriptionCache;
@property (retain, nonatomic) NSMutableDictionary *subscriptionView;
@property (retain) NSLock *subscriptionViewLock;
@property (retain, nonatomic) NSString *subscriptionProcessKey;
@property (retain) NSMutableDictionary *readyLanguages;
@property (retain, nonatomic) UAFAssetSetObserver *subscriptionAssetSetObserver;

+ (id)get;
+ (id)blockingOnDemandDownloadForLocale:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (id)getAssetPathForLocale:(id)a0 withError:(id *)a1;
+ (BOOL)isLocaleEmbedded:(id)a0;
+ (void)onDemandDownloadForLocale:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (id)validateLocale:(id)a0;
+ (id)SupportedLocales;
+ (id)blockingRemoveAssetForLocale:(id)a0 withTimeout:(unsigned long long)a1;
+ (id)getAssetPathForLocale:(id)a0;
+ (id)EmbeddedLocales;
+ (BOOL)isLocaleDownloadSupported:(id)a0;
+ (id)EmbeddedLanguages;
+ (id)MorphunDomain;
+ (id)getUAFAssetName;
+ (id)SupportedSiriLocales;
+ (id)getUAFUsageType;
+ (void)updateUAFAssetSetForUsageValue:(id)a0;
+ (id)EmbeddedVersion;
+ (void)MorphunAssetsLazyInitIfNeeded;
+ (id)SupportedLanguages;
+ (id)SupportedSiriLanguages;
+ (id)getUAFAssetSets;
+ (id)assetPathDB;
+ (id)bcpStringForComponentArray:(id)a0;
+ (id)bcpStringForLocale:(id)a0;
+ (BOOL)canUpdateExistingAssetSet:(id)a0 withNewAssetSet:(id)a1 forUsageValue:(id)a2;
+ (id)componentArrayForLocale:(id)a0;
+ (long long)deliveryMethodForLocale:(id)a0;
+ (id)getAssetPathForCurrentSiriLanguage;
+ (id)getFactorNameForLocale:(id)a0;
+ (id)getFactorSuffixForLocale:(id)a0;
+ (id)getUAFAssetForLocale:(id)a0;
+ (id)getUAFAssetSetForUsageValue:(id)a0;
+ (id)getUAFAssetSetName;
+ (id)getUAFUsageValueForLocale:(id)a0;
+ (void)initForSiriX:(id /* block */)a0;
+ (void)observeUAFAssetSet;
+ (void)removeAssetForLocale:(id)a0 withCompletion:(id /* block */)a1;
+ (void)setTrialNamespaceToUse:(long long)a0;
+ (id)subscriptionDbInitializerWithKey:(id)a0;
+ (id)uLocaleToNSLocale:(const void *)a0;
+ (BOOL)validateLanguageCode:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)downloadLocaleIfNeeded:(id)a0 withCompletion:(id /* block */)a1;
- (id)getMorphunDataPathForLocale:(id)a0;
- (id)getMorphunDataPathForLocale:(id)a0 withError:(id *)a1;
- (BOOL)isAssetReadyForLocale:(id)a0;
- (BOOL)isSubscribedToLocale:(id)a0;
- (id)listSubscriptions;
- (id)processSubscriptions;
- (void)readSubscriptionView;
- (id)referenceCountsFromSubscriptionView;
- (void)removeLanguageIfNeeded:(id)a0;
- (void)subscribeToLocale:(id)a0 withCompletion:(id /* block */)a1;
- (void)unsubscribeFromLocale:(id)a0;
- (void)writeSubscriptionView;

@end
