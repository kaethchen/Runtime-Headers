@class PEGASUSSchemaPEGASUSAMPSafetyLoggingInfo, PEGASUSSchemaPEGASUSRewrittenUtterancesReported, SISchemaInstrumentationMessage, PEGASUSSchemaPEGASUSUtteranceUnderstandingReportedTier1, PEGASUSSchemaPEGASUSRequestEndedTier1, PEGASUSSchemaPEGASUSRequestContext, PEGASUSSchemaPEGASUSInfoDomainMultistepAndMultiturnExecutionReported, NSData, PEGASUSSchemaPEGASUSUtteranceUnderstandingReported, PEGASUSSchemaPEGASUSServerEventMetadata, PEGASUSSchemaPEGASUSRewrittenUtterancesReportedTier1, PEGASUSSchemaPEGASUSAsrCorrectionInfo;

@interface PEGASUSSchemaPEGASUSServerEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSServerEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSRequestContext *pegasusRequestContext;
@property (nonatomic) BOOL hasPegasusRequestContext;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSRewrittenUtterancesReported *pegasusRewrittenUtterancesReported;
@property (nonatomic) BOOL hasPegasusRewrittenUtterancesReported;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSRewrittenUtterancesReportedTier1 *pegasusRewrittenUtterancesReportedTier1;
@property (nonatomic) BOOL hasPegasusRewrittenUtterancesReportedTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSUtteranceUnderstandingReported *pegasusUtteranceUnderstandingReported;
@property (nonatomic) BOOL hasPegasusUtteranceUnderstandingReported;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSUtteranceUnderstandingReportedTier1 *pegasusUtteranceUnderstandingReportedTier1;
@property (nonatomic) BOOL hasPegasusUtteranceUnderstandingReportedTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSRequestEndedTier1 *pegasusRequestEndedTier1;
@property (nonatomic) BOOL hasPegasusRequestEndedTier1;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSInfoDomainMultistepAndMultiturnExecutionReported *pegasusInfoDomainMultistepAndMultiturnExecutionReported;
@property (nonatomic) BOOL hasPegasusInfoDomainMultistepAndMultiturnExecutionReported;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAMPSafetyLoggingInfo *pegasusAmpSafetyLoggingInfo;
@property (nonatomic) BOOL hasPegasusAmpSafetyLoggingInfo;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSAsrCorrectionInfo *pegasusAsrCorrectionInfo;
@property (nonatomic) BOOL hasPegasusAsrCorrectionInfo;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEventMetadata;
- (void)deletePegasusAmpSafetyLoggingInfo;
- (void)deletePegasusAsrCorrectionInfo;
- (void)deletePegasusInfoDomainMultistepAndMultiturnExecutionReported;
- (void)deletePegasusRequestContext;
- (void)deletePegasusRequestEndedTier1;
- (void)deletePegasusRewrittenUtterancesReported;
- (void)deletePegasusRewrittenUtterancesReportedTier1;
- (void)deletePegasusUtteranceUnderstandingReported;
- (void)deletePegasusUtteranceUnderstandingReportedTier1;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
