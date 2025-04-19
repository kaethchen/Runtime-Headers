@class NSString, SCPreviewAttributes, CALayer;
@protocol SCPreviewDelegate;

@interface SCPreview : NSObject <RPScreenRecorderScreenCapureKitPreviewDelegate> {
    CALayer *_layer;
    NSString *_streamID;
    unsigned int _slot;
    long long _previewContent;
    unsigned int _windowID;
}

@property (weak, nonatomic) id<SCPreviewDelegate> delegate;
@property (readonly, nonatomic) SCPreviewAttributes *attributes;
@property (readonly, nonatomic) NSString *previewID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getCornerRadiusFromContentRectScaling:(struct CGSize { double x0; double x1; })a0 withViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)stopWithCompletionHandler:(id /* block */)a0;
- (void)previewDidUpdate:(id)a0;
- (void)connectLayerWithSlot:(unsigned int)a0;
- (id)initWithStreamID:(id)a0 previewContent:(long long)a1 delegate:(id)a2 layer:(id)a3 windowID:(unsigned int)a4;
- (id)serializedPreviewConfig;
- (void)updateAttibutesForPreviewUpdate:(id)a0;

@end
