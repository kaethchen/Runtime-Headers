@class QLTGeneratorThumbnailRequest;

@interface QLProxyingGenerationHandler : NSObject <QLIncrementalThumbnailGenerationHandler> {
    QLTGeneratorThumbnailRequest *_generatorRequest;
}

- (void).cxx_destruct;
- (void)didGenerateThumbnailForRequestWithUUID:(id)a0 images:(id)a1 metadata:(id)a2 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 iconFlavor:(int)a4 thumbnailType:(long long)a5 clientShouldTakeOwnership:(BOOL)a6;
- (void)didUpdateStatus:(long long)a0 ofThumbnailGenerationWithUUID:(id)a1;
- (void)failedToGenerateThumbnailOfType:(long long)a0 forRequestWithUUID:(id)a1 error:(id)a2;
- (id)initWithGeneratorRequest:(id)a0;

@end
