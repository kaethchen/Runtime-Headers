@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureDeviceControlRequestQueue : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_mutableArray;
}

- (void)dealloc;
- (id)init;
- (id)dequeue;
- (void)enqueueRequest:(id)a0;
- (id)head;

@end
