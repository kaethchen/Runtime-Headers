@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BWMetadataTimeMachine : NSObject {
    int _capacity;
    id /* block */ _addHandler;
    NSObject<OS_dispatch_queue> *_metadataHandlingQueue;
    NSMutableArray *_metadata;
    NSMutableArray *_requests;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _earliestAllowedPTS;
    int _numberOfConsecutiveFlushes;
}

@property (readonly, nonatomic) NSString *name;
@property struct { long long x0; int x1; unsigned int x2; long long x3; } earliestAllowedPTS;

+ (void)initialize;

- (void)dealloc;
- (void)reset;
- (id)metadata;
- (void)addDroppedFrameForPortType:(id)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)addMetadata:(id)a0;
- (id)initWithName:(id)a0 capacity:(int)a1 metadataHandlingPriority:(unsigned int)a2 addHandler:(id /* block */)a3;
- (id)metadataForPTSRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 timeout:(float)a1;
- (BOOL)waitUntilCapacity:(int)a0 timeout:(float)a1;

@end
