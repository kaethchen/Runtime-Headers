@class NSString, NSData, SISchemaUUID;

@interface CDASchemaCDAUserFeedbackCompleted : SISchemaInstrumentationMessage {
    struct { unsigned char userFeedbackStatus : 1; unsigned char isCorrectDeviceSelected : 1; unsigned char userReportedResponseDeviceDistance : 1; unsigned char dataCollectionGroup : 1; unsigned char hasResponseFromMultipleDevices : 1; } _has;
}

@property (copy, nonatomic) NSString *surveyId;
@property (nonatomic) BOOL hasSurveyId;
@property (nonatomic) int userFeedbackStatus;
@property (nonatomic) BOOL hasUserFeedbackStatus;
@property (nonatomic) BOOL isCorrectDeviceSelected;
@property (nonatomic) BOOL hasIsCorrectDeviceSelected;
@property (retain, nonatomic) SISchemaUUID *expectedWinnerSiriSpeechId;
@property (nonatomic) BOOL hasExpectedWinnerSiriSpeechId;
@property (copy, nonatomic) NSString *failureReasonCategory;
@property (nonatomic) BOOL hasFailureReasonCategory;
@property (nonatomic) double userReportedResponseDeviceDistance;
@property (nonatomic) BOOL hasUserReportedResponseDeviceDistance;
@property (nonatomic) int dataCollectionGroup;
@property (nonatomic) BOOL hasDataCollectionGroup;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL hasResponseFromMultipleDevices;
@property (nonatomic) BOOL hasHasResponseFromMultipleDevices;
@property (retain, nonatomic) SISchemaUUID *expectedWinnerElectionParticipantId;
@property (nonatomic) BOOL hasExpectedWinnerElectionParticipantId;
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
- (void)deleteDataCollectionGroup;
- (void)deleteExpectedWinnerElectionParticipantId;
- (void)deleteExpectedWinnerSiriSpeechId;
- (void)deleteExperimentId;
- (void)deleteFailureReasonCategory;
- (void)deleteHasResponseFromMultipleDevices;
- (void)deleteIsCorrectDeviceSelected;
- (void)deleteSurveyId;
- (void)deleteUserFeedbackStatus;
- (void)deleteUserReportedResponseDeviceDistance;
- (id)suppressMessageUnderConditions;

@end
