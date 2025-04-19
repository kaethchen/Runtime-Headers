@class NSMediaLibraryBrowserControllerViewBridgePanel, NSProgressIndicator;

@interface NSMediaLibraryBrowserControllerViewBridge : NSMediaLibraryBrowserControllerViewBridgeBase <NSRemoteViewDelegate, MediaLibraryBrowserRemoteViewControllerProtocol> {
    unsigned char _clientDidSetFrame : 1;
}

@property (weak, nonatomic) NSMediaLibraryBrowserControllerViewBridgePanel *panel;
@property (weak, nonatomic) NSProgressIndicator *progressIndicator;
@property (readonly) BOOL shouldRetainExportedObject;

- (void)dealloc;
- (void).cxx_destruct;
- (id)exportedInterface;
- (BOOL)isVisible;
- (void)mediaLibraryFinishedLoading:(unsigned long long)a0;
- (id)serviceViewControllerInterface;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMediaLibraries:(unsigned long long)a0;
- (void)setVisible:(BOOL)a0;
- (void)togglePanel:(id)a0;
- (void)view:(id)a0 encounteredError:(id)a1;

@end
