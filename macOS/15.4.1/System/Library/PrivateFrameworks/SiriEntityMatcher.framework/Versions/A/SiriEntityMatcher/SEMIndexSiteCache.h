@class NSString, NSURL, NSObject, SEMIndexSite;
@protocol OS_dispatch_queue;

@interface SEMIndexSiteCache : NSObject <SEMIndexSiteAvailabilityObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    SEMIndexSite *_defaultIndexSite;
    BOOL _readOnly;
}

@property (readonly, nonatomic) NSURL *managerDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)clear;
- (void)_evictCachedUserVaultIndexSite:(id)a0;
- (void)_cachedUserVaultIndexSiteForCurrentPersonaIfExists:(id /* block */)a0;
- (id)_loadIndexSiteDirectoryWithName:(id)a0 parentDirectory:(id)a1 error:(id *)a2;
- (id)cachedDefaultIndexSite:(id *)a0;
- (id)cachedUserVaultIndexSiteForCurrentPersona:(id *)a0;
- (void)enumerateIndexSitesUsingBlock:(id /* block */)a0;
- (void)indexSiteAvailableWithType:(unsigned char)a0;
- (void)indexSiteUnavailableSoonWithType:(unsigned char)a0;
- (void)indexSiteUnavailableWithType:(unsigned char)a0;
- (id)indexSiteWithType:(unsigned char)a0 error:(id *)a1;
- (id)initWithManagerDirectory:(id)a0 readOnly:(BOOL)a1;
- (id)openUserVaultTransaction:(id *)a0 forPersonaIdentifier:(id)a1 error:(id *)a2;

@end
