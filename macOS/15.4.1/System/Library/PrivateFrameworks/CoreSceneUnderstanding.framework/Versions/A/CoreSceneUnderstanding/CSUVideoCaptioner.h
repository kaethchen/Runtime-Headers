@class CSUVideoCaptionerConfiguration, CSUImageCaptioningDecoder;

@interface CSUVideoCaptioner : NSObject

@property (readonly, nonatomic) CSUVideoCaptionerConfiguration *config;
@property (retain, nonatomic) CSUImageCaptioningDecoder *imageCaptionDecoder;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)loadResources:(id *)a0;
- (id)_initWithConfiguration:(id)a0 error:(id *)a1;
- (id)computeCaptionForVideoEmbedding:(id)a0 error:(id *)a1;

@end
