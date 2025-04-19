@class NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentMessageSignals : SISchemaInstrumentationMessage {
    struct { unsigned char appContactAffinityScoreForMessages : 1; unsigned char appContactAffinityScoreForMessagesUsingSiri : 1; unsigned char appContactAffinityScoreForMessagesReceived : 1; unsigned char appContactFreqForMessages2Min : 1; unsigned char appContactFreqForMessages10Min : 1; unsigned char appContactFreqForMessages1Hr : 1; unsigned char appContactFreqForMessages6Hr : 1; unsigned char appContactFreqForMessages1Day : 1; unsigned char appContactFreqForMessages7Day : 1; unsigned char appContactFreqForMessages28Day : 1; unsigned char appContactFreqForMessagesInf : 1; unsigned char appContactFreqForMessages : 1; unsigned char appContactFreqForMessagesUsingSiri : 1; unsigned char appContactFreqForMessagesHaptic : 1; } _has;
}

@property (nonatomic) float appContactAffinityScoreForMessages;
@property (nonatomic) BOOL hasAppContactAffinityScoreForMessages;
@property (nonatomic) float appContactAffinityScoreForMessagesUsingSiri;
@property (nonatomic) BOOL hasAppContactAffinityScoreForMessagesUsingSiri;
@property (nonatomic) float appContactAffinityScoreForMessagesReceived;
@property (nonatomic) BOOL hasAppContactAffinityScoreForMessagesReceived;
@property (nonatomic) int appContactFreqForMessages2Min;
@property (nonatomic) BOOL hasAppContactFreqForMessages2Min;
@property (nonatomic) int appContactFreqForMessages10Min;
@property (nonatomic) BOOL hasAppContactFreqForMessages10Min;
@property (nonatomic) int appContactFreqForMessages1Hr;
@property (nonatomic) BOOL hasAppContactFreqForMessages1Hr;
@property (nonatomic) int appContactFreqForMessages6Hr;
@property (nonatomic) BOOL hasAppContactFreqForMessages6Hr;
@property (nonatomic) int appContactFreqForMessages1Day;
@property (nonatomic) BOOL hasAppContactFreqForMessages1Day;
@property (nonatomic) int appContactFreqForMessages7Day;
@property (nonatomic) BOOL hasAppContactFreqForMessages7Day;
@property (nonatomic) int appContactFreqForMessages28Day;
@property (nonatomic) BOOL hasAppContactFreqForMessages28Day;
@property (nonatomic) int appContactFreqForMessagesInf;
@property (nonatomic) BOOL hasAppContactFreqForMessagesInf;
@property (nonatomic) int appContactFreqForMessages;
@property (nonatomic) BOOL hasAppContactFreqForMessages;
@property (nonatomic) int appContactFreqForMessagesUsingSiri;
@property (nonatomic) BOOL hasAppContactFreqForMessagesUsingSiri;
@property (nonatomic) int appContactFreqForMessagesHaptic;
@property (nonatomic) BOOL hasAppContactFreqForMessagesHaptic;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppContactFreqForMessages;
- (void)deleteAppContactAffinityScoreForMessages;
- (void)deleteAppContactAffinityScoreForMessagesReceived;
- (void)deleteAppContactAffinityScoreForMessagesUsingSiri;
- (void)deleteAppContactFreqForMessages10Min;
- (void)deleteAppContactFreqForMessages1Day;
- (void)deleteAppContactFreqForMessages1Hr;
- (void)deleteAppContactFreqForMessages28Day;
- (void)deleteAppContactFreqForMessages2Min;
- (void)deleteAppContactFreqForMessages6Hr;
- (void)deleteAppContactFreqForMessages7Day;
- (void)deleteAppContactFreqForMessagesHaptic;
- (void)deleteAppContactFreqForMessagesInf;
- (void)deleteAppContactFreqForMessagesUsingSiri;
- (id)suppressMessageUnderConditions;

@end
