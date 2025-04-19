@class NSString, NSDictionary, MLMultiArray, NSArray;
@protocol CSUBuffer;

@interface CSUSystemSearchTextEncoderV1NetworkOutput : NSObject

@property (retain, nonatomic) NSDictionary *additionalLayers;
@property (nonatomic) BOOL truncatedInput;
@property (retain, nonatomic) NSString *processedInput;
@property (readonly) MLMultiArray *systemSearchTextEmbeddingMLMultiArray;
@property (readonly) id<CSUBuffer> systemSearchTextEmbedding;
@property (readonly) NSArray *tokenSegments;

- (void).cxx_destruct;
- (id)initWithTextEmbedding:(const void *)a0 tokenSegments:(id)a1;

@end
