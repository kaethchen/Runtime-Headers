@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AMSCircularBuffer : NSObject {
    unsigned long long _maxSize;
}

@property (retain) NSObject<OS_dispatch_queue> *accessQueue;
@property unsigned long long currentIndex;
@property (retain) NSMutableArray *buffer;
@property (readonly, copy) NSArray *allObjects;
@property (readonly) unsigned long long count;
@property unsigned long long maxSize;

+ (id)_rearrangeObjects:(id)a0 forCurrentIndex:(unsigned long long)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)flush;
- (id)_flush;
- (id)initWithMaxSize:(unsigned long long)a0;

@end
