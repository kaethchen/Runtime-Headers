@class NSString, NSData;

@interface MHSchemaMHVoiceProfileICloudSyncFinished : SISchemaInstrumentationMessage {
    struct { unsigned char isVoiceProfileSyncSuccess : 1; unsigned char locale : 1; } _has;
}

@property (copy, nonatomic) NSString *enrollmentId;
@property (nonatomic) BOOL hasEnrollmentId;
@property (nonatomic) BOOL isVoiceProfileSyncSuccess;
@property (nonatomic) BOOL hasIsVoiceProfileSyncSuccess;
@property (copy, nonatomic) NSString *voiceProfileSyncFailureReason;
@property (nonatomic) BOOL hasVoiceProfileSyncFailureReason;
@property (nonatomic) int locale;
@property (nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsVoiceProfileSyncSuccess;
- (void)deleteEnrollmentId;
- (void)deleteLocale;
- (void)deleteVoiceProfileSyncFailureReason;
- (id)suppressMessageUnderConditions;

@end
