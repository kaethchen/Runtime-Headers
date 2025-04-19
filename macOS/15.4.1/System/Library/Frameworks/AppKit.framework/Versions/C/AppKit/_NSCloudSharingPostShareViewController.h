@interface _NSCloudSharingPostShareViewController : NSViewController <NSRemoteViewDelegate> {
    id _remoteViewControllerStuff;
}

@property (copy) id /* block */ disconnectionHandler;
@property (readonly) BOOL shouldRetainExportedObject;

+ (void)requestViewControllerForPopover:(BOOL)a0 withItem:(id)a1 options:(unsigned long long)a2 sharingServiceParameters:(id)a3 connectionHandler:(id /* block */)a4;

- (void)dealloc;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;
- (void)viewDidInvalidate:(id)a0;

@end
