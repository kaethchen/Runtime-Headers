@class TSCHTextCache, NSMapTable;

@interface TSCHTextCacheMap : NSObject {
    TSCHTextCache *_mainCache;
    NSMapTable *_map;
}

- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (id)textCacheForStyleProvidingSource:(id)a0;

@end
