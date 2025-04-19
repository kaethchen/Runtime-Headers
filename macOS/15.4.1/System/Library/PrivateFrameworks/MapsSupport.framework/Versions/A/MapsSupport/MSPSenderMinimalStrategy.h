@class NSMutableSet;

@interface MSPSenderMinimalStrategy : MSPSenderIDSStrategy {
    NSMutableSet *_participantsNeedingInitialState;
}

+ (BOOL)_supportsEvent:(unsigned long long)a0;
+ (double)_etaRefreshIntervalForState:(id)a0;

- (void).cxx_destruct;
- (void)addParticipants:(id)a0;
- (void)_setState:(id)a0;
- (void)removeParticipants:(id)a0;
- (id)_filteredParticipantsForState:(id)a0 event:(unsigned long long)a1;
- (void)_sendInitialStateIfNeeded;
- (void)didFetchCapabilitiesForParticipants:(id)a0;
- (id)initWithGroupSession:(id)a0;
- (BOOL)removeParticipant:(id)a0 forReason:(unsigned long long)a1;

@end
