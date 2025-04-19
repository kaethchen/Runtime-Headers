@interface PXDiscoveryFeedGenerationOptions : NSObject <NSCopying>

@property (nonatomic) BOOL usePhotoAnalysisdThroughXPC;
@property (nonatomic) unsigned long long discoveryRankingMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)dictionaryRepresentation;

@end
