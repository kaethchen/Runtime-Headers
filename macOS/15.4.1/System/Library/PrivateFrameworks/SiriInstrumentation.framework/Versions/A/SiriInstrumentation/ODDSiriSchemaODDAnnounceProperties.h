@class NSData;

@interface ODDSiriSchemaODDAnnounceProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isAnnounceCallsEnabled : 1; unsigned char isAnnounceNotificationsEnabled : 1; unsigned char isProximityCardSeen : 1; unsigned char isReplyWithoutConfirmationEnabled : 1; unsigned char isEnabledForHeadphones : 1; unsigned char isSpokenNotificationsControlCenterModuleEnabled : 1; unsigned char isCarPlayMuted : 1; unsigned char carPlayStatus : 1; } _has;
}

@property (nonatomic) BOOL isAnnounceCallsEnabled;
@property (nonatomic) BOOL hasIsAnnounceCallsEnabled;
@property (nonatomic) BOOL isAnnounceNotificationsEnabled;
@property (nonatomic) BOOL hasIsAnnounceNotificationsEnabled;
@property (nonatomic) BOOL isProximityCardSeen;
@property (nonatomic) BOOL hasIsProximityCardSeen;
@property (nonatomic) BOOL isReplyWithoutConfirmationEnabled;
@property (nonatomic) BOOL hasIsReplyWithoutConfirmationEnabled;
@property (nonatomic) BOOL isEnabledForHeadphones;
@property (nonatomic) BOOL hasIsEnabledForHeadphones;
@property (nonatomic) BOOL isSpokenNotificationsControlCenterModuleEnabled;
@property (nonatomic) BOOL hasIsSpokenNotificationsControlCenterModuleEnabled;
@property (nonatomic) BOOL isCarPlayMuted;
@property (nonatomic) BOOL hasIsCarPlayMuted;
@property (nonatomic) int carPlayStatus;
@property (nonatomic) BOOL hasCarPlayStatus;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCarPlayStatus;
- (void)deleteIsAnnounceCallsEnabled;
- (void)deleteIsAnnounceNotificationsEnabled;
- (void)deleteIsCarPlayMuted;
- (void)deleteIsEnabledForHeadphones;
- (void)deleteIsProximityCardSeen;
- (void)deleteIsReplyWithoutConfirmationEnabled;
- (void)deleteIsSpokenNotificationsControlCenterModuleEnabled;
- (id)suppressMessageUnderConditions;

@end
