@class NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentPhoneCallSignals : SISchemaInstrumentationMessage {
    struct { unsigned char appContactAffinityScoreForPhoneCall : 1; unsigned char appContactAffinityScoreForPhoneCallUsingSiri : 1; unsigned char appContactAffinityScoreForPhoneCallReceived : 1; unsigned char appContactFreqForPhoneCall2Min : 1; unsigned char appContactFreqForPhoneCall10Min : 1; unsigned char appContactFreqForPhoneCall1Hr : 1; unsigned char appContactFreqForPhoneCall6Hr : 1; unsigned char appContactFreqForPhoneCall1Day : 1; unsigned char appContactFreqForPhoneCall7Day : 1; unsigned char appContactFreqForPhoneCall28Day : 1; unsigned char appContactFreqForPhoneCallInf : 1; unsigned char appContactFreqForPhoneCall : 1; unsigned char appContactFreqForPhoneCallUsingSiri : 1; unsigned char appContactFreqForPhoneCallHaptic : 1; } _has;
}

@property (nonatomic) float appContactAffinityScoreForPhoneCall;
@property (nonatomic) BOOL hasAppContactAffinityScoreForPhoneCall;
@property (nonatomic) float appContactAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) BOOL hasAppContactAffinityScoreForPhoneCallUsingSiri;
@property (nonatomic) float appContactAffinityScoreForPhoneCallReceived;
@property (nonatomic) BOOL hasAppContactAffinityScoreForPhoneCallReceived;
@property (nonatomic) int appContactFreqForPhoneCall2Min;
@property (nonatomic) BOOL hasAppContactFreqForPhoneCall2Min;
@property (nonatomic) int appContactFreqForPhoneCall10Min;
@property (nonatomic) BOOL hasAppContactFreqForPhoneCall10Min;
@property (nonatomic) int appContactFreqForPhoneCall1Hr;
@property (nonatomic) BOOL hasAppContactFreqForPhoneCall1Hr;
@property (nonatomic) int appContactFreqForPhoneCall6Hr;
@property (nonatomic) BOOL hasAppContactFreqForPhoneCall6Hr;
@property (nonatomic) int appContactFreqForPhoneCall1Day;
@property (nonatomic) BOOL hasAppContactFreqForPhoneCall1Day;
@property (nonatomic) int appContactFreqForPhoneCall7Day;
@property (nonatomic) BOOL hasAppContactFreqForPhoneCall7Day;
@property (nonatomic) int appContactFreqForPhoneCall28Day;
@property (nonatomic) BOOL hasAppContactFreqForPhoneCall28Day;
@property (nonatomic) int appContactFreqForPhoneCallInf;
@property (nonatomic) BOOL hasAppContactFreqForPhoneCallInf;
@property (nonatomic) int appContactFreqForPhoneCall;
@property (nonatomic) BOOL hasAppContactFreqForPhoneCall;
@property (nonatomic) int appContactFreqForPhoneCallUsingSiri;
@property (nonatomic) BOOL hasAppContactFreqForPhoneCallUsingSiri;
@property (nonatomic) int appContactFreqForPhoneCallHaptic;
@property (nonatomic) BOOL hasAppContactFreqForPhoneCallHaptic;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppContactAffinityScoreForPhoneCall;
- (void)deleteAppContactAffinityScoreForPhoneCallReceived;
- (void)deleteAppContactAffinityScoreForPhoneCallUsingSiri;
- (void)deleteAppContactFreqForPhoneCall;
- (void)deleteAppContactFreqForPhoneCall10Min;
- (void)deleteAppContactFreqForPhoneCall1Day;
- (void)deleteAppContactFreqForPhoneCall1Hr;
- (void)deleteAppContactFreqForPhoneCall28Day;
- (void)deleteAppContactFreqForPhoneCall2Min;
- (void)deleteAppContactFreqForPhoneCall6Hr;
- (void)deleteAppContactFreqForPhoneCall7Day;
- (void)deleteAppContactFreqForPhoneCallHaptic;
- (void)deleteAppContactFreqForPhoneCallInf;
- (void)deleteAppContactFreqForPhoneCallUsingSiri;
- (id)suppressMessageUnderConditions;

@end
