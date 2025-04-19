@class POMMESSchemaPOMMESResourceDownloadContext, POMMESSchemaPOMMESCacheLookupContext, SISchemaInstrumentationMessage, POMMESSchemaPOMMESServiceClassifierScoreReported, POMMESSchemaPOMMESDebugPerformanceReported, POMMESSchemaPOMMESPegasusRequestContext, POMMESSchemaPOMMESCacheInvalidationContext, POMMESSchemaPOMMESCacheMaintenanceContext, POMMESSchemaPOMMESPegasusRequestGeoAppResolutionReported, POMMESSchemaPOMMESOnDeviceIndexSearchContext, POMMESSchemaPOMMESClientEventMetadata, POMMESSchemaPOMMESProfileSliceResolutionRequestContext, POMMESSchemaPOMMESSearchRequestClassifierExecuted, POMMESSchemaPOMMESPegasusKitPegasusRequestContext, POMMESSchemaPOMMESRequestContext, POMMESSchemaPOMMESCacheStoringContext, NSData;

@interface POMMESSchemaPOMMESClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) POMMESSchemaPOMMESClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestContext *pegasusRequestContext;
@property (nonatomic) BOOL hasPegasusRequestContext;
@property (retain, nonatomic) POMMESSchemaPOMMESOnDeviceIndexSearchContext *onDeviceIndexSearchContext;
@property (nonatomic) BOOL hasOnDeviceIndexSearchContext;
@property (retain, nonatomic) POMMESSchemaPOMMESServiceClassifierScoreReported *pommesServiceClassifierScoreReported;
@property (nonatomic) BOOL hasPommesServiceClassifierScoreReported;
@property (retain, nonatomic) POMMESSchemaPOMMESRequestContext *pommesRequestContext;
@property (nonatomic) BOOL hasPommesRequestContext;
@property (retain, nonatomic) POMMESSchemaPOMMESDebugPerformanceReported *performanceReported;
@property (nonatomic) BOOL hasPerformanceReported;
@property (retain, nonatomic) POMMESSchemaPOMMESProfileSliceResolutionRequestContext *profileResolutionRequestContext;
@property (nonatomic) BOOL hasProfileResolutionRequestContext;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusKitPegasusRequestContext *pegasusKitRequestContext;
@property (nonatomic) BOOL hasPegasusKitRequestContext;
@property (retain, nonatomic) POMMESSchemaPOMMESResourceDownloadContext *resourceDownloadContext;
@property (nonatomic) BOOL hasResourceDownloadContext;
@property (retain, nonatomic) POMMESSchemaPOMMESCacheLookupContext *cacheLookupContext;
@property (nonatomic) BOOL hasCacheLookupContext;
@property (retain, nonatomic) POMMESSchemaPOMMESCacheStoringContext *cacheStoringContext;
@property (nonatomic) BOOL hasCacheStoringContext;
@property (retain, nonatomic) POMMESSchemaPOMMESCacheInvalidationContext *cacheInvalidationContext;
@property (nonatomic) BOOL hasCacheInvalidationContext;
@property (retain, nonatomic) POMMESSchemaPOMMESCacheMaintenanceContext *cacheMaintenanceContext;
@property (nonatomic) BOOL hasCacheMaintenanceContext;
@property (retain, nonatomic) POMMESSchemaPOMMESPegasusRequestGeoAppResolutionReported *pommesPegasusRequestGeoAppResolutionReported;
@property (nonatomic) BOOL hasPommesPegasusRequestGeoAppResolutionReported;
@property (retain, nonatomic) POMMESSchemaPOMMESSearchRequestClassifierExecuted *pommesSearchRequestClassifierExecuted;
@property (nonatomic) BOOL hasPommesSearchRequestClassifierExecuted;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (id)getInnerTypeStringByTag:(unsigned long long)a0;
+ (int)joinability;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (int)componentName;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (int)getAnyEventType;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (int)clockIsolationLevel;
- (void)deleteCacheInvalidationContext;
- (void)deleteCacheLookupContext;
- (void)deleteCacheMaintenanceContext;
- (void)deleteCacheStoringContext;
- (void)deleteEventMetadata;
- (void)deleteOnDeviceIndexSearchContext;
- (void)deletePegasusKitRequestContext;
- (void)deletePegasusRequestContext;
- (void)deletePerformanceReported;
- (void)deletePommesPegasusRequestGeoAppResolutionReported;
- (void)deletePommesRequestContext;
- (void)deletePommesSearchRequestClassifierExecuted;
- (void)deletePommesServiceClassifierScoreReported;
- (void)deleteProfileResolutionRequestContext;
- (void)deleteResourceDownloadContext;
- (id)getComponentId;
- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichInnerEventType;

@end
