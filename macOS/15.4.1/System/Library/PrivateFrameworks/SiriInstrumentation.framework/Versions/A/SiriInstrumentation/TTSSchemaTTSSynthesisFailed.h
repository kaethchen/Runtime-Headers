@class NSArray, NSData;

@interface TTSSchemaTTSSynthesisFailed : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *errorCodes;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearErrorCodes;
- (unsigned long long)errorCodesCount;
- (void)addErrorCodes:(int)a0;
- (void)deleteErrorCodes;
- (int)errorCodesAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;

@end
