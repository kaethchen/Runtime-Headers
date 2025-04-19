@class NSData;

@interface PSESchemaPSEMessage : SISchemaInstrumentationMessage {
    struct { unsigned char hasUserInitiatedFollowup : 1; unsigned char userFollowupEventDonationTimeInSecondsSince2001 : 1; unsigned char messageUserFollowupAction : 1; unsigned char contactMatch : 1; unsigned char contactFullNamePhoneticScore : 1; unsigned char contactFirstNamePhoneticScore : 1; unsigned char contactLastNamePhoneticScore : 1; } _has;
}

@property (nonatomic) BOOL hasUserInitiatedFollowup;
@property (nonatomic) BOOL hasHasUserInitiatedFollowup;
@property (nonatomic) double userFollowupEventDonationTimeInSecondsSince2001;
@property (nonatomic) BOOL hasUserFollowupEventDonationTimeInSecondsSince2001;
@property (nonatomic) int messageUserFollowupAction;
@property (nonatomic) BOOL hasMessageUserFollowupAction;
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
- (void)deleteMessageUserFollowupAction;
- (void)deleteContactFirstNamePhoneticScore;
- (void)deleteContactFullNamePhoneticScore;
- (void)deleteContactLastNamePhoneticScore;
- (void)deleteContactMatch;
- (void)deleteHasUserInitiatedFollowup;
- (void)deleteUserFollowupEventDonationTimeInSecondsSince2001;
- (id)suppressMessageUnderConditions;

@end
