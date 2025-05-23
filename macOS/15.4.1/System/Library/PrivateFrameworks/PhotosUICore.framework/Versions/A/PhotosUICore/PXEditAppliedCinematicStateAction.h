@class NSDictionary, PXCinematicEditController;

@interface PXEditAppliedCinematicStateAction : PXAction {
    PXCinematicEditController *_cinematicController;
    NSDictionary *_sourceCinematographyState;
    NSDictionary *_targetCinematographyState;
    id /* block */ _changeBlock;
}

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (void)executeWithUndoManager:(id)a0;
- (id)initWithCinematicController:(id)a0 changeBlock:(id /* block */)a1;
- (void)performRedo:(id /* block */)a0;

@end
