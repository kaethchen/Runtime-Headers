@class NSString, NSArray, NSData;

@interface WBSPerformImageOperationUsingWebViewResponse : WBSSiteMetadataResponse

@property (readonly, copy, nonatomic) NSString *imageType;
@property (readonly, copy, nonatomic) NSArray *availableImageSizes;
@property (readonly, copy, nonatomic) NSData *multiResolutionImageData;
@property (readonly, nonatomic) BOOL didGenerateResolutions;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)initWithImageType:(id)a0 availableImageSizes:(id)a1;
- (id)initWithMultiResolutionImageData:(id)a0 didGenerateResolutions:(BOOL)a1;

@end
