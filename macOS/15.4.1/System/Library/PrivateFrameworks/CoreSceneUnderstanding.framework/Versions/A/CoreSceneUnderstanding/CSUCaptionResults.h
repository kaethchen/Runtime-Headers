@class MLMultiArray, NSArray;
@protocol CSUBuffer;

@interface CSUCaptionResults : NSObject

@property (retain, nonatomic) id<CSUBuffer> decoderFeaturesCSUBuffer;
@property (retain, nonatomic) MLMultiArray *decoderFeaturesMLMultiArray;
@property (readonly, copy, nonatomic) NSArray *results;

+ (id)createCaptionResultsWithResults:(id)a0;

- (void).cxx_destruct;
- (id)initWithCaptionResults:(id)a0;

@end
