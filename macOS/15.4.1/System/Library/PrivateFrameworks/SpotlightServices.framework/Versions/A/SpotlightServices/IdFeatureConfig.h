@interface IdFeatureConfig : FeatureConfig

@property int embeddingTableSize;
@property int embeddingDimention;
@property BOOL hashing;
@property int hashBucketStart;

- (id)init;

@end
