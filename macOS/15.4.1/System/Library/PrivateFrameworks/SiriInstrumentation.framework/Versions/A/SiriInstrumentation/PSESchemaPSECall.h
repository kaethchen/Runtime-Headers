@class NSData;

@interface PSESchemaPSECall : SISchemaInstrumentationMessage {
    struct { unsigned char callDurationInSeconds : 1; unsigned char hasUserInitiatedFollowup : 1; unsigned char timeToEstablishInSeconds : 1; unsigned char recentCallStatus : 1; unsigned char disconnectedReason : 1; unsigned char contactMatch : 1; unsigned char contactFullNamePhoneticScore : 1; unsigned char contactFirstNamePhoneticScore : 1; unsigned char contactLastNamePhoneticScore : 1; } _has;
}

@property (nonatomic) double callDurationInSeconds;
@property (nonatomic) BOOL hasCallDurationInSeconds;
@property (nonatomic) BOOL hasUserInitiatedFollowup;
@property (nonatomic) BOOL hasHasUserInitiatedFollowup;
@property (nonatomic) double timeToEstablishInSeconds;
@property (nonatomic) BOOL hasTimeToEstablishInSeconds;
@property (nonatomic) int recentCallStatus;
@property (nonatomic) BOOL hasRecentCallStatus;
@property (nonatomic) int disconnectedReason;
@property (nonatomic) BOOL hasDisconnectedReason;
@property (nonatomic) int contactMatch;
@property (nonatomic) BOOL hasContactMatch;
@property (nonatomic) double contactFullNamePhoneticScore;
@property (nonatomic) BOOL hasContactFullNamePhoneticScore;
@property (nonatomic) double contactFirstNamePhoneticScore;
@property (nonatomic) BOOL hasContactFirstNamePhoneticScore;
@property (nonatomic) double contactLastNamePhoneticScore;
@property (nonatomic) BOOL hasContactLastNamePhoneticScore;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCallDurationInSeconds;
- (void)deleteContactFirstNamePhoneticScore;
- (void)deleteContactFullNamePhoneticScore;
- (void)deleteContactLastNamePhoneticScore;
- (void)deleteContactMatch;
- (void)deleteDisconnectedReason;
- (void)deleteHasUserInitiatedFollowup;
- (void)deleteRecentCallStatus;
- (void)deleteTimeToEstablishInSeconds;
- (id)suppressMessageUnderConditions;

@end
