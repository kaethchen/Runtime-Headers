@class CNContactStore, CNObservable, CNAvatarCacheChangeListener, NSString, CNCache, NSObject;
@protocol OS_os_log, CNSchedulerProvider, CNUIPRLikenessResolver;

@interface CNAvatarCache : NSObject <CNAvatarCacheChangeListenerDelegate>

@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;
@property (class, readonly, nonatomic) long long defaultProhibitedSources;
@property (class, readonly, nonatomic) long long photoAndDefaultProhibitedSources;

@property (readonly, nonatomic) id<CNUIPRLikenessResolver> likenessResolver;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNCache *likenessCache;
@property (readonly, nonatomic) CNObservable *contactStoreChangeNotificationWatcher;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) CNAvatarCacheChangeListener *changeHistoryListener;
@property (nonatomic) BOOL liveUpdating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithLikenessResolver:(id)a0;
- (void)updateContactsWithIdentifiers:(id)a0;
- (void)performFirstResolutionForEntry:(id)a0;
- (id)refetchContact:(id)a0;
- (id)initWithLikenessResolver:(id)a0 contactStore:(id)a1;
- (id)initWithProhibitedSources:(long long)a0;
- (void)invalidateObservables:(id)a0;
- (id)lastKnownLikenessForContact:(id)a0;
- (id)likenessHandlerForContact:(id)a0;
- (id)oneShotQueryForLikenessOfContact:(id)a0;
- (void)updateLikenessForEntry:(id)a0;

@end
