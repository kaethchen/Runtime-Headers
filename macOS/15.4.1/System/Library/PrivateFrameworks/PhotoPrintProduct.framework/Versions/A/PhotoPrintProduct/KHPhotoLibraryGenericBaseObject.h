@class NSString, NSMutableSet, NSObject, KHImage;
@protocol OS_dispatch_semaphore;

@interface KHPhotoLibraryGenericBaseObject : NSObject <KHPhotoLibraryBase> {
    NSObject<OS_dispatch_semaphore> *_loadingSemaphore;
    NSMutableSet *_hydrationCompletionBlocks;
}

@property (retain, nonatomic) KHImage *iconImage;
@property (nonatomic) BOOL needsHydration;
@property (nonatomic) BOOL hydrating;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addHydrationCompletionBlock:(id /* block */)a0;
- (void)executeHydration;
- (void)hydrateSource:(id /* block */)a0;
- (void)notifyOfCompletion;
- (void)postHydrationBeganNotification;
- (void)postHydrationCompletedNotification;
- (void)removeAllHydrationCompletionBlocks;

@end
