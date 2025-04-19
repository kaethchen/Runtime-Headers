@interface SidecarRunLoopCondition : SidecarRunLoopSource {
    _Atomic BOOL _flag;
    _Atomic BOOL _modal;
}

@property (copy) id /* block */ handler;

- (void).cxx_destruct;
- (void)signal;
- (void)perform;
- (long long)runModalForWindow:(id)a0;
- (id)_description;
- (void)waitInMode:(id)a0;
- (void)waitInMode:(id)a0 withTimeout:(double)a1;

@end
