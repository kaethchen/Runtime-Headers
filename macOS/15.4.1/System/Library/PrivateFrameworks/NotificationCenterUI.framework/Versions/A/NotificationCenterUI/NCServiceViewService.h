@class NCServiceWindow, NSUUID, NSView, NSString, NCRemoteViewServiceContainerView;

@interface NCServiceViewService : NSServiceViewController <NCRemoteServiceContainerViewDelegate, NSWindowDelegate> {
    NCRemoteViewServiceContainerView *_rootContainer;
}

@property (copy) NSUUID *uuid;
@property (readonly) NSView *rootContainer;
@property (readonly) NCServiceWindow *serviceWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)exportedObject;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)windowDidBecomeKey:(id)a0;
- (BOOL)allowsImplicitResizeRequests;
- (id)remoteViewControllerInterface;
- (BOOL)remoteViewSizeChanged:(struct CGSize { double x0; double x1; })a0 transaction:(id)a1;
- (void)remoteViewServiceContainerView:(id)a0 requestSizeChange:(struct CGSize { double x0; double x1; })a1 fence:(id)a2;
- (void)serviceRegisterSessionUUID:(id)a0 forHost:(BOOL)a1;

@end
