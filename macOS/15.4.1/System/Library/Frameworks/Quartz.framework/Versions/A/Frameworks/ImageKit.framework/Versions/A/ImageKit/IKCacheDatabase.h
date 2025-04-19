@class NSMutableDictionary, NSMutableIndexSet, IKIconDatabase, NSMutableArray;

@interface IKCacheDatabase : NSObject {
    NSMutableArray *_indexedObjects;
    NSMutableDictionary *_uids;
    NSMutableIndexSet *_freeIndexes;
    IKIconDatabase *_iconCache;
}

- (void)dealloc;
- (id)init;
- (unsigned long long)lastIndex;
- (id)entries;
- (id)iconCache;
- (id)entryAtIndex:(unsigned long long)a0;
- (unsigned long long)addUID:(id)a0;
- (void)_releaseIndex:(unsigned long long)a0;
- (void)_removeEntryAtIndex:(unsigned long long)a0;
- (void)_retainIndex:(unsigned long long)a0;
- (void)addReference:(id)a0 atIndex:(unsigned long long)a1;
- (void)associateUID:(id)a0 withIndex:(unsigned long long)a1;
- (unsigned long long)cacheVersionForUID:(id)a0;
- (BOOL)entryAtUIDIsValid:(id)a0;
- (id)freeIndexes;
- (id)imageWithUID:(id)a0;
- (unsigned long long)indexForUID:(id)a0;
- (void)invalidateEntryAtUID:(id)a0;
- (unsigned long long)nextFreeIndex;
- (id)nodeAtIndex:(unsigned long long)a0 withSize:(int)a1;
- (long long)referenceCountAtIndex:(unsigned long long)a0;
- (void)releaseIndex:(unsigned long long)a0;
- (void)removeReference:(id)a0 atIndex:(unsigned long long)a1;
- (void)resetInternalCacheVersionForUID:(id)a0;
- (void)retainIndex:(unsigned long long)a0;
- (void)setCacheVersion:(unsigned long long)a0 forUID:(id)a1;
- (void)setImage:(id)a0 withUID:(id)a1;
- (unsigned long long)unshareUID:(id)a0;
- (void)validateEntryAtUID:(id)a0;

@end
