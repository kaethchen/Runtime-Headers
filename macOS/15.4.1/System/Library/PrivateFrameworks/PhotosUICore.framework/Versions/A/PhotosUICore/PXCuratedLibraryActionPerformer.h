@class PXCuratedLibraryViewModel;

@interface PXCuratedLibraryActionPerformer : PXActionPerformer

@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly, nonatomic) long long actionZoomLevel;

- (void).cxx_destruct;
- (void)performActionWithCompletionHandler:(id /* block */)a0;
- (id)initWithActionType:(id)a0;
- (id)initWithActionType:(id)a0 viewModel:(id)a1;
- (BOOL)keepMenuPresented;
- (id)localizedTitleForUseCase:(unsigned long long)a0;
- (BOOL)performerResetsAfterCompletion;

@end
