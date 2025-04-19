@class QLFileThumbnailRequest, NSXPCConnection, QLThumbnailReply;

@interface QLServiceThumbnailRenderer : NSObject

@property (retain, nonatomic) QLFileThumbnailRequest *request;
@property (retain, nonatomic) QLThumbnailReply *reply;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_IOSurfaceSizeFromThumbnailReply:(id)a0;
- (void)_afterGeneratingIOSurfaceThumbnail:(BOOL)a0 surface:(id)a1;
- (BOOL)_canCreateContextOfSize:(struct CGSize { double x0; double x1; })a0 forRequest:(id)a1;
- (id)_drawInContextOfSize:(struct CGSize { double x0; double x1; })a0 colorSpace:(struct CGColorSpace { } *)a1 error:(id *)a2 drawingBlock:(id /* block */)a3;
- (void)_drawInCurrentContextOfSize:(struct CGSize { double x0; double x1; })a0 colorSpace:(struct CGColorSpace { } *)a1 drawingBlock:(id /* block */)a2;
- (void)_drawInIOSurface;
- (void)_drawMultipleImages;
- (void)_drawWithRendererBlock;
- (void)_finishWithSuccess:(BOOL)a0 error:(id)a1;
- (id)_thumbnailDataDestructionConcurrenQueue;
- (void)generateThumbnailAndPerformCompletionHandler;
- (id)initWithRequest:(id)a0 reply:(id)a1 connection:(id)a2 completionHandler:(id /* block */)a3;
- (id)protocolHostWithErrorHandler:(id /* block */)a0;

@end
