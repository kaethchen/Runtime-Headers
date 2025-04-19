@class NSUUID, LNTranscriptObservingProvider, NSMutableSet, WFConfiguredSystemIntentAction, LNMetadataProvider;
@protocol WFNextStaccatoActionStreamObserverDelegate;

@interface WFNextStaccatoActionStreamObserver : NSObject

@property (retain, nonatomic) LNTranscriptObservingProvider *observingProvider;
@property (copy, nonatomic) NSUUID *connectionUUID;
@property (readonly, nonatomic) LNMetadataProvider *metadataProvider;
@property (retain, nonatomic) NSMutableSet *trackingActivityIDs;
@property (weak, nonatomic) id<WFNextStaccatoActionStreamObserverDelegate> delegate;
@property (retain, nonatomic) WFConfiguredSystemIntentAction *baseAction;
@property (readonly, nonatomic, getter=isObserving) BOOL observing;

- (id)init;
- (void).cxx_destruct;
- (void)didReceiveNextAction:(id)a0 baseAction:(id)a1 forAppWithBundleIdentifier:(id)a2 associatedLiveActivityIdentifier:(id)a3;
- (void)observationDidStartWithConnectionUUID:(id)a0;
- (void)observingProviderObservationDidInterrupted:(id)a0;
- (void)removeTrackingActivityID:(id)a0;
- (void)startObservingWithCompletion:(id /* block */)a0;
- (void)stopObservingWithCompletion:(id /* block */)a0;

@end
