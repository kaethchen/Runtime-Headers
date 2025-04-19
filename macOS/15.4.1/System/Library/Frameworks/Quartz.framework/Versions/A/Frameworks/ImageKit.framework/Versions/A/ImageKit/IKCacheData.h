@class IKCacheNode, IKCacheDatabase, IKCacheManager;

@interface IKCacheData : NSObject {
    IKCacheManager *_parent;
    IKCacheDatabase *_db;
    IKCacheNode *_lastRequestedNode;
    int _lastRequestedSize;
    unsigned long long _lastRequestedUID;
}

- (void)dealloc;
- (id)init;
- (id)database;
- (id)parent;
- (void)setParent:(id)a0;
- (id)nodeForUID:(unsigned long long)a0 size:(int)a1 createIfNeeded:(BOOL)a2;
- (id)objectWithUID:(unsigned long long)a0 withSize:(int)a1 withKey:(int)a2;
- (id)cacheNodeWithUID:(unsigned long long)a0 withSize:(int)a1;
- (void)prepareChildsToDie;
- (void)removeCacheNodeWithUID:(unsigned long long)a0 withSize:(int)a1;
- (void)removeObjectWithUID:(unsigned long long)a0 withSize:(int)a1 withKey:(int)a2;
- (BOOL)storeImage:(id)a0 withUID:(unsigned long long)a1 withSize:(int)a2;
- (unsigned long long)unshareEntriesWithUIDIfNeeded:(id)a0 cacheManager:(id)a1;

@end
