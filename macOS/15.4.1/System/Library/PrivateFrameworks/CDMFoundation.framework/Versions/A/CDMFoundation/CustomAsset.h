@class NSString, NSDictionary;

@interface CustomAsset : NSObject <NLAsset> {
    NSString *_path;
    NSString *_version;
    NSDictionary *_assetMetadata;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPath:(id)a0;
- (id)toDictionary;
- (id)getAssetVersion;
- (id)getAssetSetName;
- (void)appendPathWithServiceAssetFolder:(id)a0;
- (id)getAssetLocale;
- (id)getAssetMetadata;
- (id)getAssetPath;
- (long long)getAssetType;

@end
