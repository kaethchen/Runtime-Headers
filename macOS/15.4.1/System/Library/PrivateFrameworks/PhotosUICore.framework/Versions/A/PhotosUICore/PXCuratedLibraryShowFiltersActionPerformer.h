@class NSString;

@interface PXCuratedLibraryShowFiltersActionPerformer : PXCuratedLibraryActionPerformer <PXFilterControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performUserInteractionTask;
- (BOOL)_isAlreadyDone;
- (id)contentFilterHiddenTypesForFilterController:(id)a0;
- (void)filterController:(id)a0 contentFilterStateChanged:(id)a1;
- (void)filterControllerDidClose:(id)a0;
- (BOOL)performerResetsAfterCompletion;

@end
