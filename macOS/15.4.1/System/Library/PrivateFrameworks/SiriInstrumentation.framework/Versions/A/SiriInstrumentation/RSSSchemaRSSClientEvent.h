@class RSSSchemaRSSSiriVocabSyncDataDownloadContext, RSSSchemaRSSSiriVocabSyncCompanionSyncPluginSyncObjectAcquisitionStarted, SISchemaInstrumentationMessage, RSSSchemaRSSSiriVocabSyncCompanionSyncPluginSyncRequested, RSSSchemaRSSSiriVocabSyncCompanionSyncUploadStarted, RSSSchemaRSSSiriVocabSyncTokenFetchRequestReceived, RSSSchemaRSSSiriVocabSyncDataUpdatedNotificationReceived, RSSSchemaRSSSiriVocabSyncTokenReceived, RSSSchemaRSSClientEventMetadata, NSData, RSSSchemaRSSSiriVocabSyncDataDonationFailed;

@interface RSSSchemaRSSClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) RSSSchemaRSSClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataDownloadContext *syncDataDownloadContext;
@property (nonatomic) BOOL hasSyncDataDownloadContext;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncTokenReceived *syncTokenReceived;
@property (nonatomic) BOOL hasSyncTokenReceived;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncTokenFetchRequestReceived *syncTokenFetchRequestReceived;
@property (nonatomic) BOOL hasSyncTokenFetchRequestReceived;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataUpdatedNotificationReceived *syncDataUpdatedNotificationReceived;
@property (nonatomic) BOOL hasSyncDataUpdatedNotificationReceived;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataDonationFailed *syncDataDonationFailed;
@property (nonatomic) BOOL hasSyncDataDonationFailed;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncCompanionSyncPluginSyncRequested *companionSyncPluginSyncRequested;
@property (nonatomic) BOOL hasCompanionSyncPluginSyncRequested;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncCompanionSyncPluginSyncObjectAcquisitionStarted *companionSyncPluginSyncObjectAcquisitionStarted;
@property (nonatomic) BOOL hasCompanionSyncPluginSyncObjectAcquisitionStarted;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncCompanionSyncUploadStarted *companionSyncUploadStarted;
@property (nonatomic) BOOL hasCompanionSyncUploadStarted;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteCompanionSyncPluginSyncObjectAcquisitionStarted;
- (void)deleteCompanionSyncPluginSyncRequested;
- (void)deleteCompanionSyncUploadStarted;
- (void)deleteEventMetadata;
- (void)deleteSyncDataDonationFailed;
- (void)deleteSyncDataDownloadContext;
- (void)deleteSyncDataUpdatedNotificationReceived;
- (void)deleteSyncTokenFetchRequestReceived;
- (void)deleteSyncTokenReceived;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
