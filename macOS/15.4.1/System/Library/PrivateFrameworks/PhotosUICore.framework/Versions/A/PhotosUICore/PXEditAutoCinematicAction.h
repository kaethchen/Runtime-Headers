@class NSString, PXCinematicEditController;

@interface PXEditAutoCinematicAction : PXAction {
    PXCinematicEditController *_cinematicController;
    BOOL _isInAutoFocusState;
}

@property (copy, nonatomic) NSString *localizedActionName;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (void)performUndo:(id /* block */)a0;
- (id)initWithCinematicController:(id)a0;
- (void)performRedo:(id /* block */)a0;

@end
