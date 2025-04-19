@protocol QLLayerBasedPreviewEventHandlingDelegate;

@interface QLLayerBasedPreviewContainerView : NSView

@property (weak) id<QLLayerBasedPreviewEventHandlingDelegate> delegate;

- (void).cxx_destruct;
- (void)scrollWheel:(id)a0;

@end
