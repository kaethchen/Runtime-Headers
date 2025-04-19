@class NSMutableArray;

@interface IKCacheDatabaseEntry : NSObject {
    NSMutableArray *_uids;
    struct __CFDictionary { } *_nodes;
    long long _dbRetainCount;
}

+ (id)nullNode;

- (void)dealloc;
- (id)sizes;
- (BOOL)isShared;
- (void)addUID:(id)a0;
- (void)addNode:(id)a0 withSize:(int)a1;
- (long long)dbRetainCount;
- (long long)decrDBRetainCount;
- (long long)incrDBRetainCount;
- (id)nodeWithSize:(int)a0;
- (void)removeNodeWithSize:(int)a0;
- (void)removeUID:(id)a0;
- (unsigned long long)thumbnailCount;
- (id)thumbnailWithSize:(int)a0;
- (id)uids;

@end
