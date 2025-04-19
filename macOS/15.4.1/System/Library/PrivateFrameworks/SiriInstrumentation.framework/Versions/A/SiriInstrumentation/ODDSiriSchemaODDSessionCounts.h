@class NSData;

@interface ODDSiriSchemaODDSessionCounts : SISchemaInstrumentationMessage {
    struct { unsigned char usdxSessionCount : 1; } _has;
}

@property (nonatomic) unsigned int usdxSessionCount;
@property (nonatomic) BOOL hasUsdxSessionCount;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteUsdxSessionCount;
- (id)suppressMessageUnderConditions;

@end
