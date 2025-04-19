@class NSUUID, HMFTimer, NSString;
@protocol HMDMediaGroupSetupMetricDispatcherDataSource, HMMLogEventSubmitting;

@interface HMDMediaGroupSetupMetricDispatcher : HMFObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak) id<HMDMediaGroupSetupMetricDispatcherDataSource> dataSource;
@property (readonly) unsigned long long metricType;
@property (readonly) id /* block */ currentUpTicksFactory;
@property (readonly, weak) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) id /* block */ submissionTimerFactory;
@property (retain) NSUUID *activeGroupIdentifier;
@property (retain) HMFTimer *submissionTimer;
@property (readonly) unsigned long long requestReceivedTimeMS;
@property (readonly) unsigned long long requestCommittedTimeMS;
@property (readonly, copy) NSUUID *setupSessionIdentifier;
@property (readonly) unsigned long long setupRequestOption;
@property (readonly) unsigned long long setupSessionStartTimeMS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (void)_resetActiveTracking;
- (void)_submitLogEvent:(id)a0 error:(id)a1;
- (void)_submitLogEventWithTotalDuration:(unsigned long long)a0 totalDurationSinceSetupSessionStart:(unsigned long long)a1 error:(id)a2;
- (unsigned long long)activeMetricType;
- (id)initWithDataSource:(id)a0 logEventSubmitter:(id)a1;
- (id)initWithDataSource:(id)a0 logEventSubmitter:(id)a1 currentUpTicksFactory:(id /* block */)a2 submissionTimerFactory:(id /* block */)a3;
- (void)markRequestCommittedForGroupIdentifier:(id)a0 metricType:(unsigned long long)a1 error:(id)a2;
- (void)markRequestReceivedForGroupIdentifier:(id)a0 metricType:(unsigned long long)a1 setupSessionIdentifier:(id)a2 setupRequestOption:(unsigned long long)a3 setupSessionStartTimeMS:(unsigned long long)a4;
- (id)setupLatencyLogEvent:(unsigned long long)a0 groupIdentifier:(id)a1 isController:(BOOL)a2 isPrimaryResident:(BOOL)a3 totalDuration:(unsigned long long)a4 setupSessionIdentifier:(id)a5 setupRequestOption:(unsigned long long)a6 totalDurationSinceSetupSessionStart:(unsigned long long)a7 errorStage:(id)a8;

@end
