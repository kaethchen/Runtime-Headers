@class NSData, PNRODSchemaPNRError;

@interface PNRODSchemaPNRODFailureInfo : SISchemaInstrumentationMessage {
    struct { unsigned char failureType : 1; unsigned char failureSubType : 1; } _has;
}

@property (nonatomic) long long failureType;
@property (nonatomic) BOOL hasFailureType;
@property (nonatomic) long long failureSubType;
@property (nonatomic) BOOL hasFailureSubType;
@property (retain, nonatomic) PNRODSchemaPNRError *error;
@property (nonatomic) BOOL hasError;
@property (retain, nonatomic) PNRODSchemaPNRError *underlyingError;
@property (nonatomic) BOOL hasUnderlyingError;
@property (retain, nonatomic) PNRODSchemaPNRError *underUnderlyingError;
@property (nonatomic) BOOL hasUnderUnderlyingError;
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
- (void)deleteError;
- (void)deleteFailureSubType;
- (void)deleteFailureType;
- (void)deleteUnderUnderlyingError;
- (void)deleteUnderlyingError;
- (id)suppressMessageUnderConditions;

@end
