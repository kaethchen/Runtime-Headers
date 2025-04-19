@class NSString, NSData;

@interface UAFSchemaUAFAssetMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char assetSizeInBytes : 1; } _has;
}

@property (copy, nonatomic) NSString *assetName;
@property (nonatomic) BOOL hasAssetName;
@property (nonatomic) unsigned long long assetSizeInBytes;
@property (nonatomic) BOOL hasAssetSizeInBytes;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAssetName;
- (void)deleteAssetSizeInBytes;
- (id)suppressMessageUnderConditions;

@end
