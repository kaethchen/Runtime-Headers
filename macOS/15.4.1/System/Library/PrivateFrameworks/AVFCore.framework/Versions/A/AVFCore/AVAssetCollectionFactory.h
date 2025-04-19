@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetCollectionFactory : NSObject {
    NSObject<OS_dispatch_queue> *_collectionsQ;
    NSMutableDictionary *_collectionsByURLString;
}

+ (id)sharedAVAssetCollectionFactory;

- (void)dealloc;
- (id)init;
- (void)_cleanUpUncollectables;
- (id)collectionWithURL:(id)a0 options:(id)a1;
- (void)forgetCollectionWithURL:(id)a0;

@end
