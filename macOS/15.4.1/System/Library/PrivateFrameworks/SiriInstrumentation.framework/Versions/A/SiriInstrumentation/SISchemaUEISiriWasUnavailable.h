@class NSArray, NSData;

@interface SISchemaUEISiriWasUnavailable : SISchemaInstrumentationMessage {
    struct { unsigned char product : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) int product;
@property (nonatomic) BOOL hasProduct;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (copy, nonatomic) NSArray *assetTypes;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (void)deleteAssetType;
- (void)addAssetType:(int)a0;
- (int)assetTypeAtIndex:(unsigned long long)a0;
- (unsigned long long)assetTypeCount;
- (void)clearAssetType;
- (void)deleteProduct;
- (id)suppressMessageUnderConditions;

@end
