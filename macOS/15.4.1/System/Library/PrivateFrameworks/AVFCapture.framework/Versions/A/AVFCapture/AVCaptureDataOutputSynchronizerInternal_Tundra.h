@class NSArray, AVWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureDataOutputSynchronizerInternal_Tundra : NSObject {
    AVWeakReference *weakReferenceDelegate;
    NSObject<OS_dispatch_queue> *clientQueue;
    NSArray *dataOutputs;
}

@end
