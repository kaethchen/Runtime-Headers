@interface AutomaticTerminationControllerObjCAdaptor : NSObject {
    struct AutomaticTerminationController { int x0; id x1; BOOL x2; BOOL x3; id x4; } *_terminationController;
}

- (void)windowDidOrderOffScreen:(id)a0;
- (void)windowDidOrderOnScreen:(id)a0;
- (void)downloadDidChangeState:(id)a0;
- (id)initWithAutomaticTerminationController:(struct AutomaticTerminationController { int x0; id x1; BOOL x2; BOOL x3; id x4; } *)a0;

@end
