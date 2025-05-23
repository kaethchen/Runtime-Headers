@class BRCItemID, BRCPrivateClientZone, NSError, NSMutableArray;

@interface BRCPCSChainEnumerator : NSEnumerator {
    unsigned long long _maxPathDepth;
    BRCPrivateClientZone *_clientZone;
    NSMutableArray *_stack;
    NSError *_error;
    BRCItemID *_itemIDNeedingListing;
}

- (void).cxx_destruct;
- (id)error;
- (id)nextObject;
- (id)initWithPCSChainInfo:(id)a0 clientZone:(id)a1;
- (id)itemIDNeedingListing;

@end
