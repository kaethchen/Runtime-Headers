@protocol CSUBuffer;

@interface CSUCLIPTextEncoderV3NetworkOutput : NSObject

@property (readonly) id<CSUBuffer> tokenEmbeddingIDs;
@property (readonly) id<CSUBuffer> tokenEmbeddingMask;
@property (readonly) id<CSUBuffer> clipTextEmbedding;

- (void).cxx_destruct;
- (id)initWithTokenEmbeddingIDs:(id)a0 tokenEmbeddingMask:(id)a1 clipTextEmbedding:(id)a2;

@end
