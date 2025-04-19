@class NSString, NSSet, HMDPreferredResidentsList, HMDPrimaryElectionCoordinationAddOn;
@protocol HMDResidentDeviceManagerContext, HMDResidentSelectionModeDelegate;

@interface HMDResidentSelectionCoordinationElection : NSObject <HMDPrimaryResidentElectionAddOnDelegate, HMDResidentSelectionMode>

@property (retain) HMDPrimaryElectionCoordinationAddOn *coordinationAddOn;
@property (readonly, weak) id<HMDResidentDeviceManagerContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDResidentSelectionModeDelegate> delegate;
@property (readonly) unsigned long long currentModeType;
@property (readonly, nonatomic) NSSet *locallyReachableResidents;
@property (readonly) unsigned long long primaryChangedReason;
@property (readonly) HMDPreferredResidentsList *localPreferredResidentsList;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)start;
- (void)stop;
- (id)dumpState;
- (void)registerForMessages;
- (id)createElectionAddOnWithContext:(id)a0;
- (id)sortedResidents;
- (id)_residentDeviceWithIdentifier:(id)a0;
- (BOOL)allowExternalUpdateOfPrimaryResidentTo:(id)a0 selectionTimestamp:(id)a1;
- (void)configureAsAResidentWithRunPrimaryEvaluation:(BOOL)a0;
- (void)currentDeviceReadyAsAResident;
- (void)didReceiveSelectionMessage:(id)a0;
- (void)didUpdateResidentSelectionModelTo:(id)a0;
- (void)didUpdateResidentStatus:(id)a0 residentsFound:(id)a1 residentsLost:(id)a2;
- (void)performSelectionWithPreferredPrimaryResident:(id)a0 requireAutoUpdate:(BOOL)a1 reason:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)primaryElectionAddOn:(id)a0 didElectPrimaryResident:(id)a1 confirmed:(BOOL)a2 electionLogEvent:(id)a3;
- (void)primaryElectionAddOn:(id)a0 didFailToElectWithError:(id)a1;
- (void)primaryElectionAddOn:(id)a0 didReceivePrimaryResidentUUIDFromLeader:(id)a1;
- (void)primaryElectionAddOn:(id)a0 didUpdateActiveNodes:(id)a1;
- (void)primaryElectionAddOn:(id)a0 didUpdateResidentDevice:(id)a1;
- (void)primaryResidentChanged:(id)a0 previousResidentDevice:(id)a1;
- (BOOL)residentIsLocallyReachable:(id)a0;
- (id)residentsNotPresentInPreferredResidentsList:(id)a0;

@end
