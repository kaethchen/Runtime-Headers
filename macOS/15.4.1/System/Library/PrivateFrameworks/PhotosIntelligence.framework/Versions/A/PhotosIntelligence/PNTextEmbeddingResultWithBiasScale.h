@class NSArray, NSNumber, NSString;

@interface PNTextEmbeddingResultWithBiasScale : NSObject <PNTextEmbeddingResult> {
    NSNumber *_bias;
    NSNumber *_scale;
}

@property (readonly, nonatomic) NSArray *embedding;
@property (readonly, nonatomic) NSNumber *calibrationVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
