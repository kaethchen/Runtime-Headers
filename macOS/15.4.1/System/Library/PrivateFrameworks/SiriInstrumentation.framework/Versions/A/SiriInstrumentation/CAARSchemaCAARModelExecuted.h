@class CAARSchemaCAARModelOutput, SISchemaAsset, NSData, CAARSchemaCAARTrialEnrollment;

@interface CAARSchemaCAARModelExecuted : SISchemaInstrumentationMessage {
    struct { unsigned char isShadowLog : 1; } _has;
}

@property (retain, nonatomic) SISchemaAsset *asset;
@property (nonatomic) BOOL hasAsset;
@property (nonatomic) BOOL isShadowLog;
@property (nonatomic) BOOL hasIsShadowLog;
@property (retain, nonatomic) CAARSchemaCAARModelOutput *modelOutput;
@property (nonatomic) BOOL hasModelOutput;
@property (retain, nonatomic) CAARSchemaCAARTrialEnrollment *trialEnrollment;
@property (nonatomic) BOOL hasTrialEnrollment;
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
- (void)deleteAsset;
- (void)deleteIsShadowLog;
- (void)deleteModelOutput;
- (void)deleteTrialEnrollment;
- (id)suppressMessageUnderConditions;

@end
