@class NSArray, _CSEmbedding, MADEmbedding;

@interface PLMediaAnalysisEmbedding : NSObject {
    MADEmbedding *_madEmbedding;
}

@property (readonly, nonatomic) long long format;
@property (readonly, nonatomic) long long dimension;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSArray *vectors;
@property (readonly, nonatomic) _CSEmbedding *csEmbedding;

- (void).cxx_destruct;
- (id)initWithMADEmbedding:(id)a0;

@end
