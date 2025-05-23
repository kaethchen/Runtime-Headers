@class FPQueryCollection, NSObject;
@protocol OS_dispatch_queue;

@interface FPTrashUnionCollection : FPUnionCollection {
    id _providerDomainChangesToken;
    FPQueryCollection *_trashQueryCollection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) FPQueryCollection *trashQueryCollection;

- (void).cxx_destruct;
- (void)fetchTrashItemsFromProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)filterDomains:(id)a0;
- (id)initWithQueryCollection:(id)a0;
- (id)scopedSearchQuery;
- (void)updateCollectionsForDomains:(id)a0;

@end
