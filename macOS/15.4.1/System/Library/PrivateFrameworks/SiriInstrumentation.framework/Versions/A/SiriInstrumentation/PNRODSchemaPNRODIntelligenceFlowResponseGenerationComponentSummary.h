@class NSString, PNRODSchemaPNRODMetricDuration, NSData, SISchemaUUID, PNRODSchemaPNRODFailureInfo;

@interface PNRODSchemaPNRODIntelligenceFlowResponseGenerationComponentSummary : SISchemaInstrumentationMessage {
    struct { unsigned char responseIsValidInput : 1; unsigned char responseIsStaticDialogueProvided : 1; unsigned char responseInferenceLocation : 1; unsigned char responseIsFallback : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *planId;
@property (nonatomic) BOOL hasPlanId;
@property (retain, nonatomic) SISchemaUUID *clientRequestId;
@property (nonatomic) BOOL hasClientRequestId;
@property (retain, nonatomic) SISchemaUUID *rawQueryEventId;
@property (nonatomic) BOOL hasRawQueryEventId;
@property (nonatomic) BOOL responseIsValidInput;
@property (nonatomic) BOOL hasResponseIsValidInput;
@property (nonatomic) BOOL responseIsStaticDialogueProvided;
@property (nonatomic) BOOL hasResponseIsStaticDialogueProvided;
@property (copy, nonatomic) NSString *responseMobileAssetVersion;
@property (nonatomic) BOOL hasResponseMobileAssetVersion;
@property (nonatomic) int responseInferenceLocation;
@property (nonatomic) BOOL hasResponseInferenceLocation;
@property (nonatomic) BOOL responseIsFallback;
@property (nonatomic) BOOL hasResponseIsFallback;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responsePreparationTime;
@property (nonatomic) BOOL hasResponsePreparationTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseInputValidationTime;
@property (nonatomic) BOOL hasResponseInputValidationTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseOverridesTime;
@property (nonatomic) BOOL hasResponseOverridesTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseCatalogueRetrievalTime;
@property (nonatomic) BOOL hasResponseCatalogueRetrievalTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseCATHydrationTime;
@property (nonatomic) BOOL hasResponseCATHydrationTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseModelInferenceTime;
@property (nonatomic) BOOL hasResponseModelInferenceTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseHallucinationInferenceTime;
@property (nonatomic) BOOL hasResponseHallucinationInferenceTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseSafetyInferenceTime;
@property (nonatomic) BOOL hasResponseSafetyInferenceTime;
@property (retain, nonatomic) PNRODSchemaPNRODMetricDuration *responseGenerationTime;
@property (nonatomic) BOOL hasResponseGenerationTime;
@property (retain, nonatomic) PNRODSchemaPNRODFailureInfo *failureInfo;
@property (nonatomic) BOOL hasFailureInfo;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteResponseInferenceLocation;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteClientRequestId;
- (void)deleteFailureInfo;
- (void)deletePlanId;
- (void)deleteRawQueryEventId;
- (void)deleteResponseCATHydrationTime;
- (void)deleteResponseCatalogueRetrievalTime;
- (void)deleteResponseGenerationTime;
- (void)deleteResponseHallucinationInferenceTime;
- (void)deleteResponseInputValidationTime;
- (void)deleteResponseIsFallback;
- (void)deleteResponseIsStaticDialogueProvided;
- (void)deleteResponseIsValidInput;
- (void)deleteResponseMobileAssetVersion;
- (void)deleteResponseModelInferenceTime;
- (void)deleteResponseOverridesTime;
- (void)deleteResponsePreparationTime;
- (void)deleteResponseSafetyInferenceTime;
- (id)suppressMessageUnderConditions;

@end
