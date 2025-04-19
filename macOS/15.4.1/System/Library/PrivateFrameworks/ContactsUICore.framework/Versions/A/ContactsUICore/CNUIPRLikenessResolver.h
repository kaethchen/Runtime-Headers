@class CNContactStore, NSString, CNUnfairLock, CNCache, CNSchedulerProvider;
@protocol CNUIPlaceholderProviderFactory, CNUIPRLikenessProvider, CNSchedulerProvider, CNUIPRLikenessResolver;

@interface CNUIPRLikenessResolver : NSObject <CNUIPRLikenessResolver>

@property (retain, nonatomic) id<CNUIPRLikenessResolver> likenessResolver;
@property (retain, nonatomic) CNCache *likenessProviderCache;
@property (retain, nonatomic) id<CNSchedulerProvider> mainThreadSchedulerProvider;
@property (retain, nonatomic) id<CNUIPlaceholderProviderFactory> placeholderProviderFactory;
@property (retain, nonatomic) CNCache *workTrackingCache;
@property (retain, nonatomic) CNUnfairLock *lock;
@property (nonatomic) unsigned long long lookupOptions;
@property (nonatomic) long long prohibitedSources;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNSchedulerProvider *schedulerProvider;
@property (readonly) id<CNUIPRLikenessProvider> loadingPlaceholderLikeness;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)_cacheKeyForContact:(id)a0;
+ (id)badgeCacheKeyForLikenessBadge:(id)a0;
+ (unsigned long long)maxContacts;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0 scheduler:(id)a1;
- (id)badgeObservableWithLikenessBadge:(id)a0 workScheduler:(id)a1;
- (id)badgeWithLikenessBadge:(id)a0;
- (id)basicMonogramFromString:(id)a0 color:(id)a1;
- (id)basicMonogramObservableFromString:(id)a0 color:(id)a1;
- (void)databaseChanged:(id)a0;
- (id)initWithContactStore:(id)a0 scheduler:(id)a1 meMonitor:(id)a2;
- (id)initWithLikenessResolver:(id)a0;
- (id)initWithLikenessResolver:(id)a0 capacity:(unsigned long long)a1;
- (id)initWithLikenessResolver:(id)a0 capacity:(unsigned long long)a1 schedulerProvider:(id)a2;
- (id)likenessForContact:(id)a0 error:(id *)a1;
- (id)likenessForContact:(id)a0 options:(id)a1 error:(id *)a2;
- (id)likenessLookup;
- (id)likenessesForContact:(id)a0 options:(id)a1 workScheduler:(id)a2;
- (id)likenessesForContact:(id)a0 workScheduler:(id)a1;
- (id)likenessesForContacts:(id)a0 options:(id)a1 error:(id)a2;
- (id)resolveLikenessesForContacts:(id)a0 workScheduler:(id)a1 withContentHandler:(id /* block */)a2;

@end
