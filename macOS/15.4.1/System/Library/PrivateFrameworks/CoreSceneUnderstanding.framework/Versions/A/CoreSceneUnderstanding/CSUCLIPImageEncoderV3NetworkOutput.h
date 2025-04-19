@protocol CSUBuffer;

@interface CSUCLIPImageEncoderV3NetworkOutput : NSObject

@property (readonly) id<CSUBuffer> imageEmbedding;

- (void).cxx_destruct;
- (id)initWithImageEmbedding:(id)a0;

@end
