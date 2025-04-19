@class SCDALinkedListItem;
@protocol SCDAQueueDelegate;

@interface SCDAQueue : NSObject <NSFastEnumeration> {
    SCDALinkedListItem *_head;
    SCDALinkedListItem *_tail;
    unsigned long long _count;
}

@property (readonly, nonatomic) id frontObject;
@property (readonly, nonatomic) unsigned long long count;
@property (weak, nonatomic) id<SCDAQueueDelegate> delegate;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)dequeueObject;
- (void)enqueueObject:(id)a0;
- (void)enqueueObjects:(id)a0;
- (id)_objects;
- (id)dequeueAllObjects;

@end
