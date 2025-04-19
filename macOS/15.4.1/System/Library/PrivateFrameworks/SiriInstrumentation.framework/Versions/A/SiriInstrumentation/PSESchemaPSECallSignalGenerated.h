@class NSData, PSESchemaPSECommonSignal, PSESchemaPSECall;

@interface PSESchemaPSECallSignalGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) PSESchemaPSECommonSignal *commonSignal;
@property (nonatomic) BOOL hasCommonSignal;
@property (retain, nonatomic) PSESchemaPSECall *callSignal;
@property (nonatomic) BOOL hasCallSignal;
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
- (void)deleteCallSignal;
- (void)deleteCommonSignal;
- (id)suppressMessageUnderConditions;

@end
