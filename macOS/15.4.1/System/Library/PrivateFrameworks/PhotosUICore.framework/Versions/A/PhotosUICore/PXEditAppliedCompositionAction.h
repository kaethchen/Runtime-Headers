@class NUComposition;

@interface PXEditAppliedCompositionAction : PXEditCompositionAction {
    NUComposition *_targetComposition;
}

@property (readonly, nonatomic) NUComposition *sourceComposition;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)initWithCompositionController:(id)a0;
- (id)initWithCompositionController:(id)a0 sourceComposition:(id)a1;
- (id)targetComposition;

@end
