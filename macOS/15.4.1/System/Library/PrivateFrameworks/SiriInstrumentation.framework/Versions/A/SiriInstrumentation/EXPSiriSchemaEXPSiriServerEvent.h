@class SISchemaInstrumentationMessage, NSData, EXPSiriSchemaEXPServerExperimentTriggeredTier1, EXPSiriSchemaEXPServerCounterfactualTriggeredTier1;

@interface EXPSiriSchemaEXPSiriServerEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) EXPSiriSchemaEXPServerExperimentTriggeredTier1 *experimentTriggered;
@property (nonatomic) BOOL hasExperimentTriggered;
@property (retain, nonatomic) EXPSiriSchemaEXPServerCounterfactualTriggeredTier1 *counterfactualTriggered;
@property (nonatomic) BOOL hasCounterfactualTriggered;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCounterfactualTriggered;
- (void)deleteExperimentTriggered;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
