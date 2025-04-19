@class NSMutableDictionary, NSMutableArray;

@interface _PASLRUCacheData : NSObject {
    NSMutableDictionary *items;
    NSMutableArray *keysMRU;
}

- (id)init;
- (void).cxx_destruct;

@end
