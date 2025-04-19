@class AVExportProgressWindowController, NSSharingServicePicker, AVPlayerView;
@protocol AVSharingServicesDelegate;

@interface AVShareController : NSObject {
    NSSharingServicePicker *_sharingServicePicker;
    AVPlayerView *_playerView;
}

@property (retain, setter=_setExportProgressWindowController:) AVExportProgressWindowController *_exportProgressWindowController;
@property (weak) id<AVSharingServicesDelegate> delegate;

- (void).cxx_destruct;
- (void)getMenuWithCompletion:(id /* block */)a0;
- (id)playerView;
- (id)fileURLForExportingShareItem:(id)a0;
- (id)fileURLForRenderedShareItem:(id)a0;
- (id)fileURLForShareItem:(id)a0 createIfNeeded:(BOOL)a1;
- (id)initWithPlayerView:(id)a0;
- (void)populateSharingServicesForPlayerView:(id)a0 menu:(id)a1;
- (void)showSharingServicePickerForPlayerView:(id)a0 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 preferredEdge:(unsigned long long)a3;

@end
