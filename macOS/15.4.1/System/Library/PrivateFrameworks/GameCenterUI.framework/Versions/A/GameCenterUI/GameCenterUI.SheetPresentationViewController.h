@interface GameCenterUI.SheetPresentationViewController : NSViewController {
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ presentingWindow;
    void /* unknown type, empty encoding */ dismissEventsMonitor;
    void /* unknown type, empty encoding */ windowObservation;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)terminate:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillLayout;
- (void)windowDidResize:(id)a0;

@end
