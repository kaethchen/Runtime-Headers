@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {
    _SCRCStackNode *_firstNode;
    _SCRCStackNode *_lastNode;
    unsigned long long _count;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
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
- (void)_safeReleaseAllObjects;

@end
