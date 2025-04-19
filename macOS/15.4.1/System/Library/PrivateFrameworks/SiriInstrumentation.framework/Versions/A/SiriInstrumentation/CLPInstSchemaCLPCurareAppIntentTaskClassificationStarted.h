@class NSData, SISchemaAsset;

@interface CLPInstSchemaCLPCurareAppIntentTaskClassificationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char classifierModelType : 1; } _has;
}

@property (nonatomic) int classifierModelType;
@property (nonatomic) BOOL hasClassifierModelType;
@property (retain, nonatomic) SISchemaAsset *classifierModelAsset;
@property (nonatomic) BOOL hasClassifierModelAsset;
@property (retain, nonatomic) SISchemaAsset *nlv4AssetVersion;
@property (nonatomic) BOOL hasNlv4AssetVersion;
@property (retain, nonatomic) SISchemaAsset *nlv4AssetVersionOverride;
@property (nonatomic) BOOL hasNlv4AssetVersionOverride;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteClassifierModelAsset;
- (void)deleteClassifierModelType;
- (void)deleteNlv4AssetVersion;
- (void)deleteNlv4AssetVersionOverride;
- (id)suppressMessageUnderConditions;

@end
