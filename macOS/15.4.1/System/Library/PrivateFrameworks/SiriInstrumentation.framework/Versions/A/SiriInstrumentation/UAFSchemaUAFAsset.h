@class NSString, NSData;

@interface UAFSchemaUAFAsset : SISchemaInstrumentationMessage {
    struct { unsigned char assetLocale : 1; unsigned char assetSource : 1; unsigned char assetSizeOnDisk : 1; unsigned char isAssetPathValid : 1; unsigned char assetDownloadSizeInBytes : 1; unsigned char assetUnarchivedSizeInBytes : 1; } _has;
}

@property (copy, nonatomic) NSString *assetName;
@property (nonatomic) BOOL hasAssetName;
@property (copy, nonatomic) NSString *assetSpecifier;
@property (nonatomic) BOOL hasAssetSpecifier;
@property (copy, nonatomic) NSString *assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
@property (nonatomic) int assetLocale;
@property (nonatomic) BOOL hasAssetLocale;
@property (nonatomic) int assetSource;
@property (nonatomic) BOOL hasAssetSource;
@property (nonatomic) unsigned int assetSizeOnDisk;
@property (nonatomic) BOOL hasAssetSizeOnDisk;
@property (nonatomic) BOOL isAssetPathValid;
@property (nonatomic) BOOL hasIsAssetPathValid;
@property (copy, nonatomic) NSString *assetPath;
@property (nonatomic) BOOL hasAssetPath;
@property (nonatomic) unsigned long long assetDownloadSizeInBytes;
@property (nonatomic) BOOL hasAssetDownloadSizeInBytes;
@property (nonatomic) unsigned long long assetUnarchivedSizeInBytes;
@property (nonatomic) BOOL hasAssetUnarchivedSizeInBytes;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssetPath;
- (void)deleteAssetName;
- (void)deleteAssetDownloadSizeInBytes;
- (void)deleteAssetLocale;
- (void)deleteAssetSizeOnDisk;
- (void)deleteAssetSource;
- (void)deleteAssetSpecifier;
- (void)deleteAssetUnarchivedSizeInBytes;
- (void)deleteAssetVersion;
- (void)deleteIsAssetPathValid;
- (id)suppressMessageUnderConditions;

@end
