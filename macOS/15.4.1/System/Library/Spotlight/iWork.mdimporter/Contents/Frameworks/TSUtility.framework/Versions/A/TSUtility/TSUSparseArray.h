@class NSIndexSet;

@interface TSUSparseArray : NSObject <NSCopying> {
    struct tsuSaPage { void /* function */ **x0; } *_topPage;
    unsigned long long _nonNilCount;
    unsigned int _depth;
}

@property (readonly) unsigned long long count;
@property (readonly) unsigned long long minKey;
@property (readonly) unsigned long long maxKey;
@property (readonly) NSIndexSet *populatedKeys;

+ (id)array;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)addObjectsFromArray:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)objectForKey:(unsigned long long)a0;
- (void)removeObjectForKey:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)setObject:(id)a0 forKey:(unsigned long long)a1;
- (void)clear;
- (BOOL)hasObjectForKey:(unsigned long long)a0;
- (void)foreach:(id /* block */)a0;
- (void)increaseDepth;
- (unsigned long long)maxIndexForCurrentDepth;

@end
