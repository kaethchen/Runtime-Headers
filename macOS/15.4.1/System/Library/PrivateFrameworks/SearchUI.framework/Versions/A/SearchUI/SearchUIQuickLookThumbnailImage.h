@class NSURL, QLThumbnailGenerationRequest, FPItemID;

@interface SearchUIQuickLookThumbnailImage : SearchUIImage

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) FPItemID *fpItemID;
@property (weak) QLThumbnailGenerationRequest *request;
@property BOOL isCompact;
@property long long bestRepresentationTypeLoaded;

- (void)dealloc;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)updateSize;
- (void)setupRequest:(id)a0;
- (unsigned long long)representationType;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (int)defaultCornerRoundingStyle;
- (void)generateImageWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithResult:(id)a0 url:(id)a1 isCompact:(BOOL)a2;
- (id)initWithSFImage:(id)a0;

@end
