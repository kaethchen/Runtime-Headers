@class NSMutableDictionary, MSPSharedTripGroupSession;

@interface MSPSenderIDSStrategy : MSPSenderStrategy {
    MSPSharedTripGroupSession *_groupSession;
}

@property (retain, nonatomic) NSMutableDictionary *lastETAUpdateDates;
@property (retain, nonatomic) NSMutableDictionary *participantsByCapabilities;
@property (retain, nonatomic) NSMutableDictionary *capabilitiesByParticipant;

+ (double)_etaRefreshIntervalForState:(id)a0;

- (void).cxx_destruct;
- (void)addParticipants:(id)a0;
- (BOOL)_needToSendETARefreshFor:(id)a0 state:(id)a1;
- (id)_filteredParticipantsForState:(id)a0 event:(unsigned long long)a1;
- (void)_sendCompatibleInstancesOfState:(id)a0 to:(id)a1;
- (void)_sendDestinationReachedUpdate:(id)a0 to:(id)a1;
- (void)_sendETAUpdate:(id)a0 to:(id)a1;
- (void)_sendETAUpdateIfNeededTo:(id)a0;
- (void)_sendResumingToNextDestinationUpdate:(id)a0 to:(id)a1;
- (void)_sendRouteUpdate:(id)a0 to:(id)a1;
- (void)_sendStoppedUpdate:(id)a0 to:(id)a1;
- (void)_sendTrafficUpdate:(id)a0 to:(id)a1;
- (void)_sendUpdatedWaypoints:(id)a0 to:(id)a1;
- (void)didFetchCapabilitiesForParticipants:(id)a0;
- (void)fetchCapabilitiesForParticipants:(id)a0 completion:(id /* block */)a1;
- (id)initWithGroupSession:(id)a0;
- (BOOL)setState:(id)a0 forEvent:(unsigned long long)a1;

@end
