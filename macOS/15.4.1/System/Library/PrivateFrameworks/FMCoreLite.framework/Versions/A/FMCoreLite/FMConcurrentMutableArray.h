@class NSMutableArray, FMReadWriteLock;

@interface FMConcurrentMutableArray : NSObject

@property (retain, nonatomic) NSMutableArray *underlyingArray;
@property (retain, nonatomic) FMReadWriteLock *lock;
@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)initWithArray:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)nativeArray;

@end
