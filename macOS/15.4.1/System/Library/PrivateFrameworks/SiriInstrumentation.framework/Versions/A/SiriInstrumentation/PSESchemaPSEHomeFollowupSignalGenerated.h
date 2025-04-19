@class NSData, PSESchemaPSECommonSignal, PSESchemaPSEHomeFollowUp;

@interface PSESchemaPSEHomeFollowupSignalGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) PSESchemaPSECommonSignal *commonSignal;
@property (nonatomic) BOOL hasCommonSignal;
@property (retain, nonatomic) PSESchemaPSEHomeFollowUp *homeFollowUpSignal;
@property (nonatomic) BOOL hasHomeFollowUpSignal;
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
- (void)deleteCommonSignal;
- (void)deleteHomeFollowUpSignal;
- (id)suppressMessageUnderConditions;

@end
