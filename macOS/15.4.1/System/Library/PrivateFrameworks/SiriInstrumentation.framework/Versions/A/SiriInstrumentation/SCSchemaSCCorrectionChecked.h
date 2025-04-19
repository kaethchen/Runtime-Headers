@class NSData, SCSchemaSCCheckCorrectionResponse;

@interface SCSchemaSCCorrectionChecked : SISchemaInstrumentationMessage

@property (retain, nonatomic) SCSchemaSCCheckCorrectionResponse *checkCorrectionResponse;
@property (nonatomic) BOOL hasCheckCorrectionResponse;
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
- (void)deleteCheckCorrectionResponse;
- (id)suppressMessageUnderConditions;

@end
