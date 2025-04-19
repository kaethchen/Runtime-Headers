@class EFLazyCache, CNContactStore, NSString, EFFuture, NSObject;
@protocol OS_os_log, EFScheduler;

@interface EMCachingContactStore : NSObject <EFSignpostable>

@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (retain, nonatomic) EFLazyCache *displayNameCache;
@property (retain) EFFuture *emailAddressCacheFuture;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) id<EFScheduler> addressCacheScheduler;
@property (readonly, nonatomic) CNContactStore *cnStore;
@property (readonly) unsigned long long signpostID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (BOOL)contactExistsForEmailAddress:(id)a0;
- (id)initWithStore:(id)a0 options:(unsigned long long)a1;
- (void)_commonInitWithStore:(id)a0 options:(unsigned long long)a1 emailAddressCache:(id)a2;
- (id)_fetchDisplayNameForEmailAddress:(id)a0 abbreviated:(BOOL)a1;
- (void)_invalidateDisplayNameCache;
- (void)_invalidateEmailAddressCache;
- (void)_scheduleEmailAddressCachePopulation;
- (id)displayNameForEmailAddress:(id)a0;
- (id)displayNameForEmailAddress:(id)a0 abbreviated:(BOOL)a1;
- (id)initForTestingWithStore:(id)a0 options:(unsigned long long)a1 emailAddressCache:(id)a2;

@end
