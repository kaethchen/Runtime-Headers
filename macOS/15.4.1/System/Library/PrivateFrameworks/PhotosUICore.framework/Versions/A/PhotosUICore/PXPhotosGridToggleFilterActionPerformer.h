@interface PXPhotosGridToggleFilterActionPerformer : PXPhotosGridActionPerformer

+ (BOOL)isLibaryFilterHidden:(long long)a0 viewModel:(id)a1;
+ (BOOL)canPerformActionType:(id)a0 withViewModel:(id)a1;
+ (BOOL)isContentFilterHidden:(long long)a0 viewModel:(id)a1;

- (void)finishedUserInteractionTask;
- (BOOL)performerResetsAfterCompletion;
- (BOOL)updateToContentFilterStateAndFinishTask:(id)a0;
- (BOOL)updateToLibraryFilterStateAndFinishTask:(id)a0;

@end
