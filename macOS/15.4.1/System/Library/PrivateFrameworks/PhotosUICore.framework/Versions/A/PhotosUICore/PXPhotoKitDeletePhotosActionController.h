@class NSArray, NSUndoManager, PXActionRecord;
@protocol PXPhotoKitDeletePhotosActionControllerDelegate;

@interface PXPhotoKitDeletePhotosActionController : NSObject {
    PXActionRecord *_record;
    id /* block */ _completionHandler;
    id /* block */ _willDeleteHandler;
}

@property (readonly, copy, nonatomic) NSArray *_assets;
@property (readonly, copy, nonatomic) NSArray *_plAssets;
@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (readonly, weak, nonatomic) id<PXPhotoKitDeletePhotosActionControllerDelegate> delegate;
@property (nonatomic) BOOL shouldSkipDeleteConfirmation;

+ (id)_suffix:(id)a0;
+ (void)assetTypeCountsForAssets:(id)a0 photosCount:(long long *)a1 videosCount:(long long *)a2 othersCount:(long long *)a3;
+ (id)warningStringForAssets:(id)a0 isDeleting:(BOOL)a1;

- (void).cxx_destruct;
- (void)_recordVariant:(id)a0;
- (void)_ensureMainAlertController;
- (void)_handleFinalConfirmation:(long long)a0;
- (void)_recordUserConfirmation:(long long)a0;
- (void)_runDestructiveActionWithCompletion:(id /* block */)a0;
- (void)getConfirmationMessage:(id *)a0 destructiveButtonTitle:(id *)a1 cancelButtonTitle:(id *)a2 isDestructiveBehavior:(BOOL *)a3;
- (id)initWithAction:(long long)a0 assets:(id)a1 undoManager:(id)a2 delegate:(id)a3;
- (void)performWithWillDeleteHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)ppt_performDeleteWithoutUserConfirmationWithCompletionHandler:(id /* block */)a0;

@end
