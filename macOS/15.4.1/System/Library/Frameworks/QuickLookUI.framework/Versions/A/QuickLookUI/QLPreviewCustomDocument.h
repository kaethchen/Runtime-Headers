@class NSView;
@protocol QLPreviewCustomView;

@interface QLPreviewCustomDocument : QLPreviewDocument {
    NSView<QLPreviewCustomView> *_customView;
}

@property BOOL observingLoadedState;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_stopObservingDocumentLoaded;
- (id)initWithPreviewItem:(id)a0 customView:(id)a1 forPreviewView:(id)a2;
- (void)startLoadingWithForcedDisplayBundleID:(id)a0 hints:(id)a1;

@end
