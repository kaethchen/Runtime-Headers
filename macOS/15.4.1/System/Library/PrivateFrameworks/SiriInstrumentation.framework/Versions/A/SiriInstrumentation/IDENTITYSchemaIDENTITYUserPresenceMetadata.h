@class NSString, NSData, SISchemaUUID;

@interface IDENTITYSchemaIDENTITYUserPresenceMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char userLocation : 1; unsigned char userLocationSource : 1; } _has;
}

@property (copy, nonatomic) NSString *loggableMultiUserSharedUserId;
@property (nonatomic) BOOL hasLoggableMultiUserSharedUserId;
@property (nonatomic) int userLocation;
@property (nonatomic) BOOL hasUserLocation;
@property (nonatomic) int userLocationSource;
@property (nonatomic) BOOL hasUserLocationSource;
@property (retain, nonatomic) SISchemaUUID *userEphemeralId;
@property (nonatomic) BOOL hasUserEphemeralId;
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
- (void)deleteLoggableMultiUserSharedUserId;
- (void)deleteUserEphemeralId;
- (void)deleteUserLocation;
- (void)deleteUserLocationSource;
- (id)suppressMessageUnderConditions;

@end
