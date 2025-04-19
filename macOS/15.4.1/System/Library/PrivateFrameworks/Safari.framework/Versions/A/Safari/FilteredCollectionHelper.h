@class NSArray, NSSet;

@interface FilteredCollectionHelper : NSObject {
    NSSet *_filteredSet;
}

@property (copy, nonatomic) NSArray *fullCollection;
@property (copy, nonatomic) NSArray *filteredCollection;

- (void).cxx_destruct;
- (id)_filteredSet;
- (id)filteredItemFollowingItem:(id)a0;
- (id)filteredItemPrecedingItem:(id)a0;

@end
