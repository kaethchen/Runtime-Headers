@class NSString, NSDictionary, MLMultiArray, NSArray;

@interface CSUTextEncoderE5MLNetworkOutput : NSObject

@property (retain, nonatomic) NSDictionary *additionalLayers;
@property (nonatomic) BOOL truncatedInput;
@property (retain, nonatomic) NSString *processedInput;
@property (readonly) MLMultiArray *textEmbedding;
@property (readonly) NSArray *tokenSegments;

- (void).cxx_destruct;
- (id)initWithTextEmbedding:(id)a0 tokenSegments:(id)a1;

@end
