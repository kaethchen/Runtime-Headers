@class NSArray, NSData;

@interface ODDSiriSchemaODDOptInProperties : SISchemaInstrumentationMessage {
    struct { unsigned char isMteUploadEnabled : 1; unsigned char dataSharingOptInStatus : 1; unsigned char isServerUserDataSyncEnabled : 1; } _has;
}

@property (nonatomic) BOOL isMteUploadEnabled;
@property (nonatomic) BOOL hasIsMteUploadEnabled;
@property (nonatomic) int dataSharingOptInStatus;
@property (nonatomic) BOOL hasDataSharingOptInStatus;
@property (copy, nonatomic) NSArray *gradingOptInStateChanges;
@property (nonatomic) BOOL isServerUserDataSyncEnabled;
@property (nonatomic) BOOL hasIsServerUserDataSyncEnabled;
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
- (void)addGradingOptInStateChanges:(id)a0;
- (void)clearGradingOptInStateChanges;
- (void)deleteDataSharingOptInStatus;
- (void)deleteGradingOptInStateChanges;
- (void)deleteIsMteUploadEnabled;
- (void)deleteIsServerUserDataSyncEnabled;
- (id)gradingOptInStateChangesAtIndex:(unsigned long long)a0;
- (unsigned long long)gradingOptInStateChangesCount;
- (id)suppressMessageUnderConditions;

@end
