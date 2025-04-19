@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MNAudioEventQueueDelegate;

@interface MNAudioSystemEventQueue : NSObject {
    NSMutableArray *_container;
    unsigned long long _capacity;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (weak, nonatomic) id<MNAudioEventQueueDelegate> delegate;
@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL empty;
@property (readonly, nonatomic) BOOL full;

- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)clear;
- (id)dequeue;
- (void)_enqueue:(id)a0;
- (id)_dequeue;
- (void)_removeEventsMatching:(id)a0;
- (BOOL)enqueue:(id)a0 withOptions:(unsigned long long)a1 andReport:(out id *)a2;

@end
