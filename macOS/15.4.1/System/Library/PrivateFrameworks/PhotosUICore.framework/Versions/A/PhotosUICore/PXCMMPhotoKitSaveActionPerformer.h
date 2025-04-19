@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitSaveActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>

@property (readonly, nonatomic) PXCMMPhotoKitSession *session;

- (BOOL)isCancellable;
- (void)performUserInteractionTask;
- (id)createActionProgress;

@end
