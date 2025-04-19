@class NUComposition;
@protocol PXEditLivePhotoModel;

@interface PXEditLivePhotoToggleAction : PXEditCompositionAction {
    id<PXEditLivePhotoModel> _livePhotoModel;
    NUComposition *_sourceComposition;
    NUComposition *_targetComposition;
}

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (BOOL)_isLoopingVideo;
- (id)initWithCompositionController:(id)a0 livePhotoModel:(id)a1;
- (void)performRedo:(id /* block */)a0;
- (id)sourceComposition;
- (id)targetComposition;

@end
