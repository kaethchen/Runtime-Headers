@class NSString;

@interface GEORequestCounterRemoteProxy : NSObject <GEORequestCounterProtocol>

@property (nonatomic) BOOL countersEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_incrementExternalForApp:(id)a0 startTime:(id)a1 endTime:(id)a2 xmitBytes:(long long)a3 recvBytes:(long long)a4 usedInterfaces:(unsigned long long)a5 requestType:(id)a6 requestSubtype:(id)a7 source:(id)a8;
- (void)_incrementForApp:(id)a0 startTime:(id)a1 endTime:(id)a2 requestType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a3 result:(unsigned char)a4 error:(id)a5 xmitBytes:(long long)a6 recvBytes:(long long)a7 usedInterfaces:(unsigned long long)a8;
- (void)clearCounters;
- (id)externalRequestCounterTicketForType:(id)a0 subtype:(id)a1 source:(id)a2 appId:(id)a3;
- (void)externalRequestsCount:(id /* block */)a0;
- (void)fetchRoutePreloadSessionsFrom:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (void)finishedProactiveTileDownloadForIdentifier:(id)a0 policy:(unsigned char)a1 tilesConsidered:(unsigned int)a2 tileDownloadAttempts:(unsigned int)a3 successes:(unsigned int)a4 failures:(unsigned int)a5 bytesDownloaded:(unsigned long long)a6;
- (void)placeCacheGetCounts:(unsigned long long)a0 forApp:(id)a1 inTimeRange:(id)a2 ofType:(int)a3 handler:(id /* block */)a4;
- (void)placeCacheRegisterCacheResult:(unsigned char)a0 forApp:(id)a1 requestType:(int)a2 timestamp:(id)a3;
- (void)readProactiveTileDownloadsSince:(id)a0 handler:(id /* block */)a1;
- (void)readRequestLogsDuring:(id)a0 handler:(id /* block */)a1;
- (void)readRequestsPerAppDuring:(id)a0 handler:(id /* block */)a1;
- (void)recordRoutePreloadSessionAt:(id)a0 transportType:(long long)a1 tilesPreloaded:(unsigned long long)a2 tilesUsed:(unsigned long long)a3 tilesMissed:(unsigned long long)a4;
- (void)recordTrafficProbeCollectionAt:(id)a0 tripId:(id)a1 locationCount:(int)a2 result:(unsigned char)a3;
- (id)requestCounterTicketForType:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 auditToken:(id)a1 traits:(id)a2;
- (void)startedProactiveTileDownloadForIdentifier:(id)a0 policy:(unsigned char)a1;

@end
