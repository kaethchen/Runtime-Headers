@class NSString, NSNumber;

@interface PLMediaAnalysisEmbeddingSearchResult : NSObject

@property (readonly, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) NSNumber *distance;

- (void).cxx_destruct;
- (id)initWithAssetUUID:(id)a0 distance:(id)a1;

@end
