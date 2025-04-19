@class NSDictionary, NSData, NSString;

@interface SFPhotosRankingInfo : NSObject <SFPhotosRankingInfo, NSSecureCoding, NSCopying> {
    struct { unsigned char totalNumberOfAssetsIndexed : 1; unsigned char totalNumberOfAssetsInLibrary : 1; unsigned char totalNumberOfEmbeddingMatchedAssets : 1; unsigned char totalNumberOfMetadataMatchedAssets : 1; unsigned char assetEstimationOffAmount : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int totalNumberOfAssetsIndexed;
@property (nonatomic) int totalNumberOfAssetsInLibrary;
@property (nonatomic) int totalNumberOfEmbeddingMatchedAssets;
@property (nonatomic) int totalNumberOfMetadataMatchedAssets;
@property (nonatomic) int assetEstimationOffAmount;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasTotalNumberOfAssetsInLibrary;
- (BOOL)hasAssetEstimationOffAmount;
- (BOOL)hasTotalNumberOfAssetsIndexed;
- (BOOL)hasTotalNumberOfEmbeddingMatchedAssets;
- (BOOL)hasTotalNumberOfMetadataMatchedAssets;

@end
