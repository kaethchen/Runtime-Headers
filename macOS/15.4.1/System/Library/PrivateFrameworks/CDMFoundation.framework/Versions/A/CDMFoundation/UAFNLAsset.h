@class NSString, NSDictionary, UAFAssetSet;

@interface UAFNLAsset : NSObject <NLAsset> {
    NSString *_factorName;
    NSString *_path;
    NSString *_assetSetName;
    NSDictionary *_assetMetadata;
    NSString *_assetLocale;
    NSString *_assetVersion;
    UAFAssetSet *_assetSet;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (id)getAssetVersion;
- (id)getAssetSetName;
- (void)appendPathWithServiceAssetFolder:(id)a0;
- (id)getAssetLocale;
- (id)getAssetMetadata;
- (id)getAssetPath;
- (id)getAssetSet;
- (long long)getAssetType;
- (id)getFactorName;
- (id)initForFactor:(id)a0 withPath:(id)a1 withAssetSetName:(id)a2 withUAFMetadata:(id)a3 withAssetSet:(id)a4;
- (void)processUAFMetadata:(id)a0;

@end
