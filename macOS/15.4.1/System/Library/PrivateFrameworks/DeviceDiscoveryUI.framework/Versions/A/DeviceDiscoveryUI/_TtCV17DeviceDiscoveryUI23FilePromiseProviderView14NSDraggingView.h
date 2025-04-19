@interface _TtCV17DeviceDiscoveryUI23FilePromiseProviderView14NSDraggingView : NSView <NSFilePromiseProviderDelegate, NSDraggingSource> {
    void /* unknown type, empty encoding */ filePromise;
    void /* unknown type, empty encoding */ preview;
    void /* unknown type, empty encoding */ mouseDownLocation;
    void /* unknown type, empty encoding */ hasDraggingSession;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (id)filePromiseProvider:(id)a0 fileNameForType:(id)a1;
- (void)filePromiseProvider:(id)a0 writePromiseToURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;

@end
