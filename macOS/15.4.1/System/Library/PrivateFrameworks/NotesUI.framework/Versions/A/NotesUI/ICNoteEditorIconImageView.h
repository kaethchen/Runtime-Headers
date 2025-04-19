@class NSString, ICMZoomController;

@interface ICNoteEditorIconImageView : NSImageView <ICMZoomableAttachmentView>

@property (retain, nonatomic) ICMZoomController *zoomController;
@property (nonatomic) double maxZoomFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)hostViewDidZoom:(id)a0;

@end
