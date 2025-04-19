@class NSLock, NSMutableSet, NSMutableArray;

@interface KHDBUniqueQueue : NSObject {
    NSLock *m_lock;
    NSMutableSet *m_inQueue;
    NSMutableArray *m_front;
    NSMutableArray *m_back;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (void)removeObjects:(id)a0;
- (void)addAtEnd:(id)a0;
- (void)addObjectsToEnd:(id)a0;
- (void)addObjectsToFront:(id)a0;
- (void)addToFront:(id)a0;
- (id)grabAllObjects;
- (id)popFrontObject;

@end
