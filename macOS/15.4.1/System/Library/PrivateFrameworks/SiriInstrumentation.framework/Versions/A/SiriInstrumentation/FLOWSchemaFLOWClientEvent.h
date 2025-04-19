@class FLOWSchemaFLOWEventMetadata, FLOWSchemaFLOWContactTier1, SISchemaInstrumentationMessage, FLOWSchemaFLOWEntityContextTier1, FLOWSchemaFLOWAppleMusicVoicePreviewOfferNotShown, FLOWSchemaFLOWDomainExecutionContext, FLOWSchemaFLOWPegasusContextTier1, FLOWSchemaFLOWMediaPlayerRadioStationContextTier1, FLOWSchemaFLOWMediaPlayerPlaybackContextTier1, FLOWSchemaFLOWSmsAttachmentMetadataTier1, FLOWSchemaFLOWStep, FLOWSchemaFLOWLocationAccessPermissionPromptContext, NSData;

@interface FLOWSchemaFLOWClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) FLOWSchemaFLOWEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) FLOWSchemaFLOWStep *flowStep;
@property (nonatomic) BOOL hasFlowStep;
@property (retain, nonatomic) FLOWSchemaFLOWEntityContextTier1 *flowEntityContextTier1;
@property (nonatomic) BOOL hasFlowEntityContextTier1;
@property (retain, nonatomic) FLOWSchemaFLOWSmsAttachmentMetadataTier1 *smsAttachmentMetadataTier1;
@property (nonatomic) BOOL hasSmsAttachmentMetadataTier1;
@property (retain, nonatomic) FLOWSchemaFLOWAppleMusicVoicePreviewOfferNotShown *appleMusicVoicePreviewOfferNotShown;
@property (nonatomic) BOOL hasAppleMusicVoicePreviewOfferNotShown;
@property (retain, nonatomic) FLOWSchemaFLOWPegasusContextTier1 *pegasusContextTier1;
@property (nonatomic) BOOL hasPegasusContextTier1;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerPlaybackContextTier1 *mediaPlayerPlaybackContextTier1;
@property (nonatomic) BOOL hasMediaPlayerPlaybackContextTier1;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerRadioStationContextTier1 *mediaPlayerRadioStationContextTier1;
@property (nonatomic) BOOL hasMediaPlayerRadioStationContextTier1;
@property (retain, nonatomic) FLOWSchemaFLOWDomainExecutionContext *flowDomainExecutionContext;
@property (nonatomic) BOOL hasFlowDomainExecutionContext;
@property (retain, nonatomic) FLOWSchemaFLOWLocationAccessPermissionPromptContext *locationAccessPermissionPromptContext;
@property (nonatomic) BOOL hasLocationAccessPermissionPromptContext;
@property (retain, nonatomic) FLOWSchemaFLOWContactTier1 *flowContactTier1;
@property (nonatomic) BOOL hasFlowContactTier1;
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
- (void)deleteAppleMusicVoicePreviewOfferNotShown;
- (void)deleteEventMetadata;
- (void)deleteFlowContactTier1;
- (void)deleteFlowDomainExecutionContext;
- (void)deleteFlowEntityContextTier1;
- (void)deleteFlowStep;
- (void)deleteLocationAccessPermissionPromptContext;
- (void)deleteMediaPlayerPlaybackContextTier1;
- (void)deleteMediaPlayerRadioStationContextTier1;
- (void)deletePegasusContextTier1;
- (void)deleteSmsAttachmentMetadataTier1;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
