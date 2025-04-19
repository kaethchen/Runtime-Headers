@class NSString, NSProgress, NSImage, NSURL, MUIWebAttachment, MUIWKWebViewController;

@interface MUIWebAttachmentController : NSObject <MCCIDURLProtocolDataProvider, QLPreviewItem, EFPubliclyDescribable> {
    long long _displayState;
}

@property (nonatomic) long long downloadedState;
@property (retain, nonatomic) NSProgress *downloadProgress;
@property (readonly, nonatomic) MUIWebAttachment *webAttachment;
@property (weak, nonatomic) MUIWKWebViewController *controller;
@property (readonly, nonatomic) NSString *markup;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedFrame;
@property (retain, nonatomic) NSImage *cachedSnapshot;
@property (nonatomic) long long displayState;
@property (readonly, nonatomic) BOOL canDisplayInline;
@property (readonly, copy, nonatomic) NSString *registrationScriptString;
@property (readonly, copy, nonatomic) NSImage *transitionImageForPreview;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameForPreview;
@property (readonly) NSURL *cidURL;
@property (readonly, copy) NSString *mimeType;
@property (readonly) long long fileSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSURL *previewItemURL;
@property (readonly) NSString *previewItemTitle;
@property (readonly) id previewItemDisplayState;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setImageScale:(long long)a0;
- (void)_handleDownloadErrorChange:(id)a0;
- (void)_handleDownloadFinished;
- (void)_handleDownloadProgress:(id)a0 changedFractionCompleted:(double)a1;
- (void)_handleUpdateForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2;
- (void)dataWithCompletionBlock:(id /* block */)a0;
- (id)initWithWebAttachment:(id)a0 controller:(id)a1;
- (void)markAsInlinePDFAttachment;
- (void)startDownloadingIfNeededWithProgress:(id)a0 completionBlock:(id /* block */)a1;

@end
