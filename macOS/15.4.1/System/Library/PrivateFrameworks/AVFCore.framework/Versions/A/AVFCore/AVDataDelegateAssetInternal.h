@class NSArray, AVAssetInspectorLoader, AVWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface AVDataDelegateAssetInternal : NSObject {
    AVWeakReference *_weakReferenceToDataDelegate;
    AVAssetInspectorLoader *_loader;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSArray *_tracks;
}

@end
