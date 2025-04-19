@class TUCallProviderManager, TUMetadataCache, NSCache;

@interface TUSubtitleProvider : NSObject

@property (readonly, nonatomic) TUCallProviderManager *callProviderManager;
@property (readonly, nonatomic) TUMetadataCache *metadataCache;
@property (readonly, nonatomic) NSCache *callProviderCache;

- (void).cxx_destruct;
- (id)callProviderForRecentCall:(id)a0;
- (id)initWithMetadataCache:(id)a0 callProviderManager:(id)a1;
- (id)localizedSubtitleForRecentCall:(id)a0 handle:(id)a1 contact:(id)a2;

@end
