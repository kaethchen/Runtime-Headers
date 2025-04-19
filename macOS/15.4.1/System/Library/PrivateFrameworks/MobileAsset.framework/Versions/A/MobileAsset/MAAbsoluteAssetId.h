@class NSString;

@interface MAAbsoluteAssetId : NSObject <NSSecureCoding> {
    NSString *_allAttributesHash;
    NSString *_assetIdHash;
    NSString *_nonAssetIdHash;
    NSString *_downloadContentHash;
    NSString *_downloadUrlHash;
    NSString *_downloadPolicyHash;
    NSString *_pallasAssetIdHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *assetId;
@property (retain, nonatomic) NSString *assetType;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlist:(id)a0;
- (id)summary;
- (id)urlHash;
- (id)allAttributesHash;
- (id)assetIdHash;
- (id)contentHash;
- (id)diffFrom:(id)a0;
- (id)diffFromAsset:(id)a0;
- (id)diffFromAssetId:(id)a0 assetType:(id)a1 attributes:(id)a2;
- (id)encodeAsPlist;
- (BOOL)hasOnlyAssetTypeAndId;
- (id)initWithAssetId:(id)a0 forAssetType:(id)a1;
- (id)initWithAssetId:(id)a0 forAssetType:(id)a1 attributes:(id)a2;
- (id)nonIdHash;
- (id)pallasDynamicAssetIdHash;
- (id)policyHash;

@end
