@interface PhotosUICore.PXPhotosGridCustomizeCollectionActionPerformer : PXPhotosGridActionPerformer

+ (BOOL)canPerformActionType:(id)a0 withViewModel:(id)a1;

- (void)performUserInteractionTask;
- (id)initWithViewModel:(id)a0 actionType:(id)a1;
- (id)localizedTitleForUseCase:(unsigned long long)a0;

@end
