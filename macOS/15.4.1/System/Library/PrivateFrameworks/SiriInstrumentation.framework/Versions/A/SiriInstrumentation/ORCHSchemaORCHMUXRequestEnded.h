@class NSArray, NSString, NSData, SISchemaUUID;

@interface ORCHSchemaORCHMUXRequestEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isMultiUser : 1; unsigned char nlRerunTimeInMs : 1; unsigned char ORCHUserIdentityClassification : 1; unsigned char isOutsider : 1; unsigned char isSelectedUserPartOfMultipleHomes : 1; unsigned char nlRerunLatencyInMs : 1; unsigned char voiceIdClassification : 1; } _has;
}

@property (nonatomic) BOOL isMultiUser;
@property (nonatomic) BOOL hasIsMultiUser;
@property (nonatomic) unsigned int nlRerunTimeInMs;
@property (nonatomic) BOOL hasNlRerunTimeInMs;
@property (copy, nonatomic) NSArray *userScores;
@property (nonatomic) int ORCHUserIdentityClassification;
@property (nonatomic) BOOL hasORCHUserIdentityClassification;
@property (nonatomic) BOOL isOutsider;
@property (nonatomic) BOOL hasIsOutsider;
@property (copy, nonatomic) NSString *voiceIdAssetVersion;
@property (nonatomic) BOOL hasVoiceIdAssetVersion;
@property (nonatomic) BOOL isSelectedUserPartOfMultipleHomes;
@property (nonatomic) BOOL hasIsSelectedUserPartOfMultipleHomes;
@property (copy, nonatomic) NSString *selectedSharedUserId;
@property (nonatomic) BOOL hasSelectedSharedUserId;
@property (nonatomic) unsigned long long nlRerunLatencyInMs;
@property (nonatomic) BOOL hasNlRerunLatencyInMs;
@property (retain, nonatomic) SISchemaUUID *selectedUserEphemeralId;
@property (nonatomic) BOOL hasSelectedUserEphemeralId;
@property (copy, nonatomic) NSString *selectedloggableUserIdHash;
@property (nonatomic) BOOL hasSelectedloggableUserIdHash;
@property (copy, nonatomic) NSArray *voiceIdScores;
@property (nonatomic) int voiceIdClassification;
@property (nonatomic) BOOL hasVoiceIdClassification;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearUserScores;
- (unsigned long long)userScoresCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)addUserScores:(id)a0;
- (void)addVoiceIdScores:(id)a0;
- (void)clearVoiceIdScores;
- (void)deleteIsMultiUser;
- (void)deleteIsOutsider;
- (void)deleteIsSelectedUserPartOfMultipleHomes;
- (void)deleteNlRerunLatencyInMs;
- (void)deleteNlRerunTimeInMs;
- (void)deleteORCHUserIdentityClassification;
- (void)deleteSelectedSharedUserId;
- (void)deleteSelectedUserEphemeralId;
- (void)deleteSelectedloggableUserIdHash;
- (void)deleteUserScores;
- (void)deleteVoiceIdAssetVersion;
- (void)deleteVoiceIdClassification;
- (void)deleteVoiceIdScores;
- (id)suppressMessageUnderConditions;
- (id)userScoresAtIndex:(unsigned long long)a0;
- (id)voiceIdScoresAtIndex:(unsigned long long)a0;
- (unsigned long long)voiceIdScoresCount;

@end
