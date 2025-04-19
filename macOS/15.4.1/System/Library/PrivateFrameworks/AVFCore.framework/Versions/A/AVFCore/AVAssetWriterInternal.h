@class AVKeyPathDependencyManager, AVWeakReference, AVAssetWriterHelper, NSObject;
@protocol OS_dispatch_queue, AVAssetWriterFinishWritingDelegate, AVAssetWriterDataWritingDelegate;

@interface AVAssetWriterInternal : NSObject {
    AVWeakReference *weakReference;
    AVAssetWriterHelper *helper;
    NSObject<OS_dispatch_queue> *helperReadWriteQueue;
    AVKeyPathDependencyManager *keyPathDependencyManager;
    id<AVAssetWriterFinishWritingDelegate> finishWritingDelegate;
    id<AVAssetWriterDataWritingDelegate> dataWritingDelegate;
}

- (void).cxx_destruct;

@end
