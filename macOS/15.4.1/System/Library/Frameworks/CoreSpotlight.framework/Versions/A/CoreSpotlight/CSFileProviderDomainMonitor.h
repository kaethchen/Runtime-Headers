@class NSDictionary, NSURL, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface CSFileProviderDomainMonitor : NSObject {
    NSDictionary *_activeDomains;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _activeDomainsLock;
    NSMutableOrderedSet *_removedDomains;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _removedDomainsLock;
    NSDictionary *_activeProvidersMap;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _activeProvidersLock;
    id /* block */ _providerMonitor;
}

@property (retain, nonatomic) id fileProviderDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *domainDeleteQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *domainUpdateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *providerMonitorQueue;
@property (readonly) NSURL *fileProviderDomainURL;
@property (copy) id /* block */ domainCleaner;
@property (copy) id /* block */ providerMonitor;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startMonitoring;
- (void)saveAllDomains:(id)a0;
- (id)getProviderIDForBundle:(id)a0;
- (unsigned long long)loadSavedDomains:(id)a0;
- (void)notifyActiveProviderChanged;
- (id)removedDomainFilterQueries;
- (void)updateActiveDomains:(id)a0;
- (BOOL)updateActiveProviders:(id)a0;
- (void)updateRemovedDomains:(id)a0;

@end
