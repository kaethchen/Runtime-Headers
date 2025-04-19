@class NSError, HMDFeaturesDataSource, NSEnumerator, HMDMessageDispatcher, HMDPrimaryResidentDiscoveryLogEvent, HMFFuture, NSString, HMDResidentDevice, NSArray, HMDHome, HMFPromise, HMFTimer, NSUUID;
@protocol HMDResidentDeviceManagerContext;

@interface HMDPrimaryResidentDiscoveryOperation : HMFOperation <HMFLogging, HMFTimerDelegate, HMDResidentStatusChannelObserver, HMDPrimaryResidentDiscoveryOperation>

@property (readonly) NSString *logIdentifier;
@property (readonly) HMDMessageDispatcher *messageDispatcher;
@property (readonly) id /* block */ responseHandler;
@property (retain) NSEnumerator *candidateDestinationsEnumerator;
@property (retain) HMFPromise *initialDiscoveryAttemptCompletionPromise;
@property (readonly) HMDFeaturesDataSource *featuresDataSource;
@property (readonly, weak, nonatomic) id<HMDResidentDeviceManagerContext> context;
@property (weak) HMDHome *home;
@property (readonly) NSArray *candidateDestinations;
@property (retain) HMFTimer *sendToNextDestinationTimer;
@property (retain) HMFTimer *sendAccountMessageTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMFFuture *initialDiscoveryAttemptCompletionFuture;
@property (readonly) HMFFuture *completionFuture;
@property (readonly) HMDResidentDevice *currentPrimaryResident;
@property (readonly) NSUUID *currentPrimaryResidentGenerationID;
@property (readonly) NSError *error;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly) HMDPrimaryResidentDiscoveryLogEvent *logEvent;

+ (id)logCategory;

- (void)run;
- (void).cxx_destruct;
- (void)finish;
- (void)cancel;
- (void)main;
- (void)cancelWithError:(id)a0;
- (void)timerDidFire:(id)a0;
- (void)channel:(id)a0 didObservePrimaryResidentChange:(id)a1;
- (void)checkResidentStatusChannelForPrimary;
- (id)initWithHome:(id)a0 messageDispatcher:(id)a1 featuresDataSource:(id)a2 context:(id)a3;
- (void)residentStatusChannelCleanup;
- (void)sendIDSAccountMessage;

@end
