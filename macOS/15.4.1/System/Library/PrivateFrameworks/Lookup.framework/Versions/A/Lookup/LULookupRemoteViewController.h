@class NSString, NSRemoteView, RVQuery, NSNumber, NSPopover;

@interface LULookupRemoteViewController : NSViewController <NSRemoteViewDelegate, NSWindowDelegate, LookupViewHostProtocol> {
    BOOL _bridgeBurnt;
}

@property (retain, nonatomic) NSRemoteView *remoteView;
@property (weak, nonatomic) NSPopover *popover;
@property (copy, nonatomic) NSString *searchTerm;
@property (copy, nonatomic) NSString *searchTermContext;
@property (copy, nonatomic) NSString *searchDomain;
@property (copy, nonatomic) NSNumber *selectionType;
@property (copy, nonatomic) NSNumber *triggerType;
@property (retain, nonatomic) RVQuery *remoteQuery;
@property (copy, nonatomic) id /* block */ textQueryProvider;
@property (readonly) BOOL shouldRetainExportedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)serviceViewControllerInterface;
- (BOOL)view:(id)a0 shouldResize:(struct CGSize { double x0; double x1; })a1;
- (void)_viewWillAppear;
- (void)_viewDidAppear;
- (void)_viewDidDisappear;
- (void)_viewDidLoad;
- (void)_viewWillDisappear;
- (void)burnViewBridge;
- (void)cancelOperationAndDismissQL:(BOOL)a0;
- (void)commonLULookupRemoteViewControllerTeardown;
- (void)runQueryWithNetworkAllowed:(BOOL)a0;
- (void)runTextQueryWithTerm:(id)a0 queryId:(unsigned long long)a1 sessionId:(id)a2 userAgent:(id)a3;

@end
