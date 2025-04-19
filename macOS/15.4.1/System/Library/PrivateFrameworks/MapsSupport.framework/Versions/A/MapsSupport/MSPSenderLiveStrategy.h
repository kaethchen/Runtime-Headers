@class NSMutableSet, NSMutableDictionary;

@interface MSPSenderLiveStrategy : MSPSenderIDSStrategy {
    NSMutableSet *_participantsNeedingRoute;
    NSMutableDictionary *_tokensByHandle;
}

+ (BOOL)_supportsEvent:(unsigned long long)a0;
+ (double)_etaRefreshIntervalForState:(id)a0;

- (void).cxx_destruct;
- (void)addParticipants:(id)a0;
- (void)_setState:(id)a0;
- (void)removeParticipants:(id)a0;
- (BOOL)_removeAllTokensForParticipant:(id)a0;
- (id)_filteredParticipantsForState:(id)a0 event:(unsigned long long)a1;
- (void)_recordTokenForHandle:(id)a0;
- (BOOL)_removeToken:(id)a0;
- (void)_sendInitialRouteIfNeeded;
- (void)didFetchCapabilitiesForParticipants:(id)a0;
- (id)initWithGroupSession:(id)a0;
- (BOOL)removeParticipant:(id)a0 forReason:(unsigned long long)a1;

@end
