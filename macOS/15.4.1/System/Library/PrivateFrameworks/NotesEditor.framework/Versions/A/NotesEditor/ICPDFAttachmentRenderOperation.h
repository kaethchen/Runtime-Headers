@class ICPDFAttachmentView, ICAttachment;

@interface ICPDFAttachmentRenderOperation : NSOperation

@property (weak) ICPDFAttachmentView *view;
@property struct CGSize { double width; double height; } size;
@property double scale;
@property (readonly, weak) ICAttachment *attachment;
@property (readonly) double width;

- (void).cxx_destruct;
- (void)main;
- (id)initWithView:(id)a0;
- (id)generateImageForPrinting;

@end
