@interface PPEvictingMinPriorityQueue : NSObject {
    unsigned long long _capacity;
    void *_queue;
}

@property (readonly, nonatomic) double count;

- (void)dealloc;
- (id)init;
- (void)addObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)capacity;
- (id)popItem;
- (id)extractSortedMutableArray;
- (id)getMinItemWithoutPopping;

@end
