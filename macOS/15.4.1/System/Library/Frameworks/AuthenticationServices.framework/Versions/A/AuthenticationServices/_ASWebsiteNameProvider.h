@class NSString, WBSPrivacyProxyAvailabilityManager, NSOperationQueue, WBSPasswordManagerWebsiteMetadataStore, WBSSQLiteDatabase, NSObject, NSMutableDictionary, _ASWebsiteNameDictionary, WBSRemotelyUpdatableDataController;
@protocol OS_dispatch_queue, WBSSavedAccountStoreWebsiteNameConsumer;

@interface _ASWebsiteNameProvider : NSObject <WBSRemotelyUpdatableDataControllerDelegate, WBSSavedAccountStoreWebsiteNameProvider> {
    WBSRemotelyUpdatableDataController *_remotelyUpdatableDataController;
    _ASWebsiteNameDictionary *_websiteNameDictionary;
    BOOL _isDatabaseOpen;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
    NSOperationQueue *_websiteFetchingQueue;
    WBSPasswordManagerWebsiteMetadataStore *_websiteMetadataStore;
    WBSPrivacyProxyAvailabilityManager *_availabilityManager;
    NSObject<OS_dispatch_queue> *_internalQueueForCachedWebsiteNames;
    NSMutableDictionary *_cachedWebsiteNamesFromKeychain;
    NSMutableDictionary *_cachedWebsiteNamesFromDatabase;
}

@property (retain, nonatomic) id<WBSSavedAccountStoreWebsiteNameConsumer> websiteNameConsumer;
@property (nonatomic) BOOL isForTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_bestTitleFromCandidateTitles:(id)a0;
+ (id)_candidateWebsiteNameForLinkMetadata:(id)a0;
+ (BOOL)_candidateWebsiteNameHasObviousFlaw:(id)a0;
+ (id)_commonTitleDelimiters;
+ (id)_siteNameFromOpenGraphSiteName:(id)a0 withURL:(id)a1;
+ (id)_siteNameFromTitle:(id)a0 withURL:(id)a1;
+ (id)_siteNameFromTitleLikeString:(id)a0 withURL:(id)a1 useHostAndTitlePrefixMatch:(BOOL)a2;
+ (id)_trimErrantLeadingAndTrailingCharacters:(id)a0;
+ (id)_undesirableCharactersCharacterSet;
+ (void)fetchWebsiteNameForDomain:(id)a0 completionHandler:(id /* block */)a1;
+ (id)siteNameForDomain:(id)a0 fromBusinessName:(id)a1 title:(id)a2 openGraphSiteName:(id)a3 applicationName:(id)a4;
+ (id)websiteNameForLinkMetadata:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)prewarm;
- (BOOL)_openDatabaseIfNeeded;
- (void)prepareForTermination;
- (id)knownWebsiteNameForDomain:(id)a0;
- (void)_cacheDatabaseBackedWebsiteName:(id)a0 forDomain:(id)a1;
- (void)_cacheFetchedAndKeychainBackedWebsiteName:(id)a0 forDomain:(id)a1;
- (id)_initWithShouldLoadQuirksList:(BOOL)a0;
- (void)_privacyProxyDidChange:(id)a0;
- (void)_processFetchedMetadataEntry:(id)a0 forDomain:(id)a1;
- (void)_suspendOrResumeWebsiteFetchingOperationQueue;
- (void)beginLoadingBuiltInAndRemotelyUpdatableWebsiteNames;
- (void)debug_deleteAllPersistedData;
- (void)debug_fetchWebsiteNamesForDomains:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchOperation:(id)a0 finishedWithResult:(id)a1 completion:(id /* block */)a2;
- (id)initForPasswordManager;
- (id)test_initWithWebsiteNameDictionary:(id)a0;
- (void)test_waitUntilBuiltInAndRemotelyUpdatableWebsiteNamesAreLoaded;

@end
