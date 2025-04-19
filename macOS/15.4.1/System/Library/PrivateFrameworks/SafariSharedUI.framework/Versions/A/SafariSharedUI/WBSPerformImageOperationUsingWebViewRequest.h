@class NSData, NSArray;

@interface WBSPerformImageOperationUsingWebViewRequest : WBSSiteMetadataRequest

@property (readonly, nonatomic) unsigned long long requestType;
@property (readonly, copy, nonatomic) NSData *imageData;
@property (readonly, nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (readonly, copy, nonatomic) NSArray *scales;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 extraInfo:(id)a1;
- (id)initForGettingImageInfoWithImageData:(id)a0;
- (id)initForGettingMultiResolutionImageDataWithImageData:(id)a0 withPreferredSize:(struct CGSize { double x0; double x1; })a1 atScales:(id)a2;

@end
