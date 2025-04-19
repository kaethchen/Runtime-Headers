@class ASRSchemaASRPackage, NSString, NSData;

@interface ASRSchemaASRPackageGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char isFinal : 1; unsigned char hasVoiceCommandInExhaustiveParses : 1; unsigned char hasVoiceCommandParses : 1; unsigned char hasVoiceCommandEditIntent : 1; unsigned char hasVoiceCommandAfterReranking : 1; unsigned char hasNoVoiceCommandAfterRespeakCheck : 1; } _has;
}

@property (retain, nonatomic) ASRSchemaASRPackage *package;
@property (nonatomic) BOOL hasPackage;
@property (nonatomic) BOOL isFinal;
@property (nonatomic) BOOL hasIsFinal;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (nonatomic) BOOL hasResultCandidateId;
@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (nonatomic) BOOL hasLoggableSharedUserId;
@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (copy, nonatomic) NSString *acousticModelVersion;
@property (nonatomic) BOOL hasAcousticModelVersion;
@property (nonatomic) BOOL hasVoiceCommandInExhaustiveParses;
@property (nonatomic) BOOL hasHasVoiceCommandInExhaustiveParses;
@property (nonatomic) BOOL hasVoiceCommandParses;
@property (nonatomic) BOOL hasHasVoiceCommandParses;
@property (nonatomic) BOOL hasVoiceCommandEditIntent;
@property (nonatomic) BOOL hasHasVoiceCommandEditIntent;
@property (nonatomic) BOOL hasVoiceCommandAfterReranking;
@property (nonatomic) BOOL hasHasVoiceCommandAfterReranking;
@property (nonatomic) BOOL hasNoVoiceCommandAfterRespeakCheck;
@property (nonatomic) BOOL hasHasNoVoiceCommandAfterRespeakCheck;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHasVoiceCommandEditIntent;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteAcousticModelVersion;
- (void)deleteHasNoVoiceCommandAfterRespeakCheck;
- (void)deleteHasVoiceCommandAfterReranking;
- (void)deleteHasVoiceCommandInExhaustiveParses;
- (void)deleteHasVoiceCommandParses;
- (void)deleteIsFinal;
- (void)deleteLoggableSharedUserId;
- (void)deleteModelVersion;
- (void)deletePackage;
- (void)deleteResultCandidateId;
- (id)suppressMessageUnderConditions;

@end
