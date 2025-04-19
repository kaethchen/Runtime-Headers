@class PXContentFilterState;

@interface PXCuratedLibraryToggleFilterActionPerformer : PXCuratedLibraryActionPerformer

@property (readonly, nonatomic) PXContentFilterState *currentContentFilterState;

- (void)finishedUserInteractionTask;
- (BOOL)updateToContentFilterStateAndFinishTask:(id)a0;
- (BOOL)updateToLibraryFilterStateAndFinishTask:(id)a0;

@end
