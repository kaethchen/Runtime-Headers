@class _AXFStackNode;

@interface AXFStackQueue : NSObject {
    _AXFStackNode *_firstNode;
    _AXFStackNode *_lastNode;
    unsigned long long _count;
}

@property (readonly, nonatomic) BOOL isEmpty;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (id)popObject;
- (void)pushObject:(id)a0;
- (id)dequeueObject;
- (void)enqueueObject:(id)a0;
- (id)dequeueObjectRetained;
- (id)popObjectRetained;
- (void)pushArray:(id)a0;
- (id)topObject;

@end
