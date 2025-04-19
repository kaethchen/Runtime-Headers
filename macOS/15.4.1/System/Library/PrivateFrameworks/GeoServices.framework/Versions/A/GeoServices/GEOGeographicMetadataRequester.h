@class NSSet, GEOLocation, NSError, geo_isolater, NSObject;
@protocol OS_dispatch_queue, GEOGeographicMetadataRequesterDelegate, GEOGeographicMetadataFetcher;

@interface GEOGeographicMetadataRequester : NSObject {
    unsigned long long _type;
    geo_isolater *_isolater;
    GEOLocation *_location;
    GEOLocation *_nextLocation;
    NSSet *_lastUsedTileKeysMinZoom;
    NSSet *_lastUsedTileKeysMaxZoom;
    unsigned long long _retryCounter;
    NSError *_lastError;
    BOOL _isRunning;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<GEOGeographicMetadataFetcher> _fetcher;
    id /* block */ _processBlock;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<GEOGeographicMetadataRequesterDelegate> _delegate;
    BOOL _delegateSupportsNoChange;
    BOOL _delegateSupportsErrors;
    BOOL _delegateSupportsSkipNotifications;
    id /* block */ _responseTerritoryBlock;
    id /* block */ _completionBlock;
}

@property (readonly, nonatomic) unsigned long long metadataType;
@property (readonly, nonatomic) unsigned short mcc;
@property (readonly, nonatomic) unsigned short mnc;
@property (copy, nonatomic) GEOLocation *location;

+ (void)fetchPossibleTerritoriesForLocation:(id)a0 responseQueue:(id)a1 responseBlock:(id /* block */)a2;
+ (void)_fetchPossibleTerritoriesForLocation:(id)a0 retryCount:(unsigned long long)a1 responseQueue:(id)a2 responseBlock:(id /* block */)a3;
+ (void)fetchDataForLocation:(id)a0 type:(unsigned long long)a1 responseQueue:(id)a2 responseBlock:(id /* block */)a3;
+ (void)fetchSmartDataModeDataForLocation:(id)a0 mcc:(unsigned short)a1 mnc:(unsigned short)a2 responseQueue:(id)a3 responseBlock:(id /* block */)a4;

- (void).cxx_destruct;
- (id)_doSimpleLookup:(id)a0 rootQuadKey:(unsigned long long)a1 error:(id *)a2;
- (id)_doTerritoryRegulatoryLookup:(id)a0 error:(id *)a1;
- (void)_fetch;
- (void)_fetchData:(id /* block */)a0;
- (void)_fetchTerritories:(id /* block */)a0;
- (void)_processResponse:(id)a0 error:(id)a1;
- (void)_processTerritories:(id)a0 error:(id)a1;
- (void)_retry;
- (id)initSmartDataModeDataWithMcc:(unsigned short)a0 mnc:(unsigned short)a1 delegateQueue:(id)a2 delegate:(id)a3;
- (id)initWithDataType:(unsigned long long)a0 delegateQueue:(id)a1 delegate:(id)a2;
- (id)initWithType:(unsigned long long)a0 mcc:(unsigned short)a1 mnc:(unsigned short)a2 queue:(id)a3 delegate:(id)a4 territoryBlock:(id /* block */)a5;
- (void)reportCorrupt:(id)a0;

@end
