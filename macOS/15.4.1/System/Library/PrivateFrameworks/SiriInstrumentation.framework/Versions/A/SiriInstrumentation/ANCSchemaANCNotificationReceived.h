@class ANCSchemaANCBackgroundContent, ANCSchemaANCAudioDevice, SISchemaUUID, ANCSchemaANCAppNotificationMetadata, NSData;

@interface ANCSchemaANCNotificationReceived : SISchemaInstrumentationMessage {
    struct { unsigned char announcementCategory : 1; unsigned char targetPlatform : 1; unsigned char isTimeSensitiveAnnouncement : 1; unsigned char appCategory : 1; unsigned char bobbleEnabled : 1; unsigned char bobbleSupported : 1; } _has;
}

@property (nonatomic) int announcementCategory;
@property (nonatomic) BOOL hasAnnouncementCategory;
@property (nonatomic) int targetPlatform;
@property (nonatomic) BOOL hasTargetPlatform;
@property (retain, nonatomic) ANCSchemaANCAudioDevice *connectedAudioDevice;
@property (nonatomic) BOOL hasConnectedAudioDevice;
@property (nonatomic) BOOL isTimeSensitiveAnnouncement;
@property (nonatomic) BOOL hasIsTimeSensitiveAnnouncement;
@property (nonatomic) int appCategory;
@property (nonatomic) BOOL hasAppCategory;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (retain, nonatomic) ANCSchemaANCBackgroundContent *backgroundContent;
@property (nonatomic) BOOL hasBackgroundContent;
@property (retain, nonatomic) ANCSchemaANCAppNotificationMetadata *notificationMetadata;
@property (nonatomic) BOOL hasNotificationMetadata;
@property (nonatomic) int bobbleEnabled;
@property (nonatomic) BOOL hasBobbleEnabled;
@property (nonatomic) int bobbleSupported;
@property (nonatomic) BOOL hasBobbleSupported;
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
- (void)deleteAnnouncementCategory;
- (void)deleteAppCategory;
- (void)deleteBackgroundContent;
- (void)deleteBobbleEnabled;
- (void)deleteBobbleSupported;
- (void)deleteConnectedAudioDevice;
- (void)deleteIsTimeSensitiveAnnouncement;
- (void)deleteLinkId;
- (void)deleteNotificationMetadata;
- (void)deleteTargetPlatform;
- (id)suppressMessageUnderConditions;

@end
