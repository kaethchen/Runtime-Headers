@class RSSSchemaRSSSiriVocabSyncDataDownloadEnded, RSSSchemaRSSSiriVocabSyncDataDownloadTriggered, NSData, RSSSchemaRSSSiriVocabSyncDataDownloadFailed;

@interface RSSSchemaRSSSiriVocabSyncDataDownloadContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataDownloadTriggered *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataDownloadEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataDownloadFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
