@class NSArray, NSMutableArray;

@interface CSKStringsIndexer : NSObject

@property (retain, nonatomic) NSMutableArray *markers;
@property (nonatomic) unsigned long long lastMarkerIndex;
@property (nonatomic) unsigned long long length;
@property (retain, nonatomic) NSArray *cachedObjects;

+ (id)indexedObjects:(id)a0;

- (void).cxx_destruct;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)_indexObjects:(id)a0;
- (long long)_searchMarkerIndexForLocation:(unsigned long long)a0;
- (void)appendObjects:(id)a0;
- (id)markerAtIndex:(long long)a0;
- (id)markerForLocation:(unsigned long long)a0;

@end
