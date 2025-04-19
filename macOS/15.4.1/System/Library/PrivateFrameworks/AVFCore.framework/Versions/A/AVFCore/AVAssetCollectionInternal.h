@class AVWeakReference, NSURL, AVAssetCollectionInspectorLoader, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetCollectionInternal : NSObject {
    NSURL *rootURL;
    NSObject<OS_dispatch_queue> *inspectorQ;
    AVAssetCollectionInspectorLoader *inspectorLoader;
    AVWeakReference *weakReference;
}

@end
