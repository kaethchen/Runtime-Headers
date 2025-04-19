@class FLOWSchemaFLOWVoiceShortcutContext, FLOWSchemaFLOWPhoneCallContext, FLOWSchemaFLOWMediaPlayerContext, FLOWSchemaFLOWHomeAutomationContext, FLOWSchemaFLOWHomeCommunicationContext, FLOWSchemaFLOWBriefingContext, FLOWSchemaFLOWPhotosContext, FLOWSchemaFLOWNotificationContext, FLOWSchemaFLOWSmsContext, FLOWSchemaFLOWIdentityContext, NSData, FLOWSchemaFLOWInformationPluginContext, FLOWSchemaFLOWPegasusContext;

@interface FLOWSchemaFLOWDomainContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWSchemaFLOWVoiceShortcutContext *voiceShortcutContext;
@property (nonatomic) BOOL hasVoiceShortcutContext;
@property (retain, nonatomic) FLOWSchemaFLOWHomeAutomationContext *homeAutomationContext;
@property (nonatomic) BOOL hasHomeAutomationContext;
@property (retain, nonatomic) FLOWSchemaFLOWPhoneCallContext *phoneCallContext;
@property (nonatomic) BOOL hasPhoneCallContext;
@property (retain, nonatomic) FLOWSchemaFLOWSmsContext *smsContext;
@property (nonatomic) BOOL hasSmsContext;
@property (retain, nonatomic) FLOWSchemaFLOWMediaPlayerContext *mediaPlayerContext;
@property (nonatomic) BOOL hasMediaPlayerContext;
@property (retain, nonatomic) FLOWSchemaFLOWIdentityContext *identityContext;
@property (nonatomic) BOOL hasIdentityContext;
@property (retain, nonatomic) FLOWSchemaFLOWBriefingContext *briefingContext;
@property (nonatomic) BOOL hasBriefingContext;
@property (retain, nonatomic) FLOWSchemaFLOWPegasusContext *pegasusContext;
@property (nonatomic) BOOL hasPegasusContext;
@property (retain, nonatomic) FLOWSchemaFLOWInformationPluginContext *informationPluginContext;
@property (nonatomic) BOOL hasInformationPluginContext;
@property (retain, nonatomic) FLOWSchemaFLOWHomeCommunicationContext *homeCommunicationContext;
@property (nonatomic) BOOL hasHomeCommunicationContext;
@property (retain, nonatomic) FLOWSchemaFLOWNotificationContext *notificationContext;
@property (nonatomic) BOOL hasNotificationContext;
@property (retain, nonatomic) FLOWSchemaFLOWPhotosContext *photosContext;
@property (nonatomic) BOOL hasPhotosContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichDomaincontext;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteBriefingContext;
- (void)deleteHomeAutomationContext;
- (void)deleteHomeCommunicationContext;
- (void)deleteIdentityContext;
- (void)deleteInformationPluginContext;
- (void)deleteMediaPlayerContext;
- (void)deleteNotificationContext;
- (void)deletePegasusContext;
- (void)deletePhoneCallContext;
- (void)deletePhotosContext;
- (void)deleteSmsContext;
- (void)deleteVoiceShortcutContext;
- (id)suppressMessageUnderConditions;

@end
