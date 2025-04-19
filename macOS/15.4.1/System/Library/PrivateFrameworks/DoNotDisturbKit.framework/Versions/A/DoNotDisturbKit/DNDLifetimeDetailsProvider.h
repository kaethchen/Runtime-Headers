@class NSTimer, NSString, NSArray, CLLocationManager, _CLPlaceInference, EKEvent, NSObject, EKEventStore;
@protocol OS_dispatch_queue, DNDLifetimeDetailsProviderDelegate;

@interface DNDLifetimeDetailsProvider : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_eventStoreQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _monitoringLifetimes;
    NSTimer *_refreshTimer;
    CLLocationManager *_locationManager;
    _CLPlaceInference *_currentPlaceInference;
    EKEventStore *_eventStore;
    EKEvent *_relevantEvent;
}

@property (readonly, copy) NSArray *availableLifetimeDetails;
@property (weak) id<DNDLifetimeDetailsProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_systemTimeChanged;
- (id)_eventStoreQueue_eventForCalendarEventLifetime:(id)a0;
- (void)_eventStoreQueue_requestRelevantEvent;
- (id)_lifetimeDetailsUntilEveningOrMorningForDate:(id)a0;
- (id)_nextRefreshTimerFireDate;
- (void)_queue_gotPlaceInferences:(id)a0;
- (void)_queue_rebuildAvailableLifetimeDetails;
- (void)_queue_requestLifetimeDetails;
- (void)_queue_resetLifetimeDetails;
- (void)_queue_scheduleRefreshTimerIfNeeded;
- (void)_requestRelevantLocationMetadata;
- (void)_scheduleRefreshTimerIfNeeded;
- (id)lifetimeDetailsForAssertionDetails:(id)a0 error:(id *)a1;
- (void)lifetimeDetailsWithMetadataForAssertionDetails:(id)a0 completionHandler:(id /* block */)a1;
- (id)lifetimeForLifetimeDetails:(id)a0 error:(id *)a1;
- (void)requestLifetimeDetails;
- (void)resetLifetimeDetails;
- (void)startUpdatingLifetimeDetailMetadata;
- (void)startUpdatingLifetimeDetails;
- (void)stopUpdatingLifetimeDetailMetadata;
- (void)stopUpdatingLifetimeDetails;

@end
