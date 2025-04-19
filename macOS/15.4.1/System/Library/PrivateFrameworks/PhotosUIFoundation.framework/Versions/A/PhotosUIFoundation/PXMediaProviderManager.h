@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface PXMediaProviderManager : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMapTable *_imageProviderByClass;
}

@property (class, readonly) PXMediaProviderManager *defaultManager;

- (id)init;
- (void).cxx_destruct;
- (id)imageProviderForAsset:(id)a0;

@end
