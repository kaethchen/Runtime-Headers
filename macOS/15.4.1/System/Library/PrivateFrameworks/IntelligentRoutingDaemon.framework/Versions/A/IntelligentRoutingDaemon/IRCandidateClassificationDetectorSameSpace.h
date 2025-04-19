@interface IRCandidateClassificationDetectorSameSpace : NSObject

+ (id)sameSpaceMiLoScoresForCandidate:(id)a0 basedOnMiLoPrediction:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;

- (void)adjustSameSpaceParametersForCandidates:(id)a0 withSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andMiLoPrediction:(id)a3 andNearbyDevicesContainer:(id)a4 andDate:(id)a5;
- (BOOL)_isSameSpaceBasedOnPDRFenceForCandidate:(id)a0 basedOnSystemState:(id)a1;
- (BOOL)_isSameSpaceBrokeredDeviceForCandidate:(id)a0 basedOnSystemState:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;
- (BOOL)_isSameSpaceCandidate:(id)a0;
- (BOOL)_isSameSpaceForCandidate:(id)a0 basedOnHistoryEventsAsc:(id)a1 andDate:(id)a2;
- (BOOL)_isSameSpaceForCandidate:(id)a0 basedOnMiLoPrediction:(id)a1 andHistoryEventsAsc:(id)a2 andDate:(id)a3;
- (id)_isSameSpaceForCandidate:(id)a0 basedOnNearbyDevices:(id)a1 andExpiryDate:(id)a2 isUWB:(BOOL)a3;

@end
