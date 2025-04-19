@class NSString, SUGSchemaSUGAutoCompleteSuggestionMetaData, NSData, SUGSchemaSUGSuppressionResult, SUGSchemaSUGSiriHelpSignal, SISchemaUUID;

@interface SUGSchemaSUGSuggestion : SISchemaInstrumentationMessage {
    struct { unsigned char deliveryVehicle : 1; unsigned char goal : 1; unsigned char finalRank : 1; unsigned char goalSpecificScore : 1; unsigned char finalScore : 1; unsigned char suggestionTier : 1; unsigned char channel : 1; unsigned char channelScore : 1; unsigned char smartSuppressionScore : 1; unsigned char numWordsInSuggestion : 1; unsigned char numCharactersInSuggestion : 1; } _has;
}

@property (copy, nonatomic) NSString *suggestionId;
@property (nonatomic) BOOL hasSuggestionId;
@property (retain, nonatomic) SUGSchemaSUGSiriHelpSignal *subscribedSignal;
@property (nonatomic) BOOL hasSubscribedSignal;
@property (nonatomic) int deliveryVehicle;
@property (nonatomic) BOOL hasDeliveryVehicle;
@property (nonatomic) int goal;
@property (nonatomic) BOOL hasGoal;
@property (nonatomic) unsigned int finalRank;
@property (nonatomic) BOOL hasFinalRank;
@property (nonatomic) double goalSpecificScore;
@property (nonatomic) BOOL hasGoalSpecificScore;
@property (nonatomic) double finalScore;
@property (nonatomic) BOOL hasFinalScore;
@property (nonatomic) int suggestionTier;
@property (nonatomic) BOOL hasSuggestionTier;
@property (retain, nonatomic) SUGSchemaSUGSuppressionResult *suppressionResult;
@property (nonatomic) BOOL hasSuppressionResult;
@property (copy, nonatomic) NSString *loggingActionId;
@property (nonatomic) BOOL hasLoggingActionId;
@property (nonatomic) int channel;
@property (nonatomic) BOOL hasChannel;
@property (nonatomic) double channelScore;
@property (nonatomic) BOOL hasChannelScore;
@property (nonatomic) double smartSuppressionScore;
@property (nonatomic) BOOL hasSmartSuppressionScore;
@property (nonatomic) int numWordsInSuggestion;
@property (nonatomic) BOOL hasNumWordsInSuggestion;
@property (nonatomic) int numCharactersInSuggestion;
@property (nonatomic) BOOL hasNumCharactersInSuggestion;
@property (retain, nonatomic) SUGSchemaSUGAutoCompleteSuggestionMetaData *autoCompleteSuggestionMetaData;
@property (nonatomic) BOOL hasAutoCompleteSuggestionMetaData;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFinalRank;
- (void)deleteNumCharactersInSuggestion;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAutoCompleteSuggestionMetaData;
- (void)deleteChannel;
- (void)deleteChannelScore;
- (void)deleteDeliveryVehicle;
- (void)deleteFinalScore;
- (void)deleteGoal;
- (void)deleteGoalSpecificScore;
- (void)deleteLinkId;
- (void)deleteLoggingActionId;
- (void)deleteNumWordsInSuggestion;
- (void)deleteSmartSuppressionScore;
- (void)deleteSubscribedSignal;
- (void)deleteSuggestionId;
- (void)deleteSuggestionTier;
- (void)deleteSuppressionResult;
- (id)suppressMessageUnderConditions;

@end
