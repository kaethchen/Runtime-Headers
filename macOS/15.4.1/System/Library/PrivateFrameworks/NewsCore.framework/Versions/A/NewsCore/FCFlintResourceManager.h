@protocol FCContentContext;

@interface FCFlintResourceManager : NSObject {
    id<FCContentContext> _context;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)cachedResourcesWithIdentifiers:(id)a0;
- (id)cachedResourceWithIdentifier:(id)a0;
- (id)fetchFontResourcesWithIdentifiers:(id)a0 downloadAssets:(BOOL)a1 relativePriority:(long long)a2 completionBlock:(id /* block */)a3;
- (id)fetchResourcesWithIdentifiers:(id)a0 downloadAssets:(BOOL)a1 relativePriority:(long long)a2 callBackQueue:(id)a3 completionBlock:(id /* block */)a4;

@end
