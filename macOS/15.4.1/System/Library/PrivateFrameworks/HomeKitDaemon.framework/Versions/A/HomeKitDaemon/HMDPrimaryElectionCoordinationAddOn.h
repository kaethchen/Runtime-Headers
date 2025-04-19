@class NSString;
@protocol HMDPrimaryResidentElectionAddOnDelegate;

@interface HMDPrimaryElectionCoordinationAddOn : NSObject <HMDPrimaryResidentElectionAddOn>

@property (weak) id<HMDPrimaryResidentElectionAddOnDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)start;
- (void)stop;
- (id)dumpState;
- (void)registerForMessages;
- (BOOL)residentIsPartOfTheCurrentMesh:(id)a0;
- (id)residentsInMesh;
- (void)performElection;
- (BOOL)allowExternalUpdateOfPrimaryResidentTo:(id)a0;
- (void)didAddCurrentDevice;
- (void)performElectionWithReason:(unsigned long long)a0;
- (void)primaryResidentChanged:(id)a0 previousResidentDevice:(id)a1;
- (void)selectPrimaryResidentWithReason:(unsigned long long)a0;

@end
