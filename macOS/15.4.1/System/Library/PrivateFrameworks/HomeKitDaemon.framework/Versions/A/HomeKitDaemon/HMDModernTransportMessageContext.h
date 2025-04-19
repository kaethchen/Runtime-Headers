@class NSUUID, NSString, HMFTimer, HMDRemoteMessage, HMFMessageDestination, HMDModernTransportMessageContextOptions, NSSet, NSMutableSet, HMDNetworkActivityWrapper, NSMapTable;
@protocol HMDNetworkActivityWrapperFactory, HMDDateProvider, HMMLogEventSubmitting, HMDTimerProvider;

@interface HMDModernTransportMessageContext : NSObject <HMFTimerDelegate, HMFLogging>

@property (copy) id /* block */ completionHandler;
@property (readonly) id<HMDDateProvider> dateProvider;
@property (readonly) id<HMDTimerProvider> timerProvider;
@property (readonly) id<HMDNetworkActivityWrapperFactory> activityFactory;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (nonatomic) BOOL didTimeout;
@property (nonatomic) BOOL didFallback;
@property (readonly, nonatomic) NSMapTable *inProgressTransportToStartTimeMap;
@property (retain) HMFTimer *responseTimer;
@property (copy) id /* block */ responseCompletionBlock;
@property (retain) HMFTimer *fallbackTimer;
@property (copy) id /* block */ fallbackCompletionBlock;
@property (retain) HMDRemoteMessage *message;
@property (readonly, copy, nonatomic) NSString *messageName;
@property (readonly, nonatomic) long long messageType;
@property (readonly, nonatomic) double messageTimeout;
@property double requestStartTime;
@property (readonly, copy, nonatomic) id /* block */ messageResponseHandler;
@property (readonly, nonatomic) long long messageQualityOfService;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSUUID *messageID;
@property (readonly, nonatomic) HMFMessageDestination *destination;
@property (readonly, nonatomic) HMDModernTransportMessageContextOptions *options;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) BOOL expectsResponse;
@property (readonly, copy, nonatomic) NSMutableSet *remainingTransports;
@property (readonly, copy, nonatomic) NSSet *inProgressTransports;
@property (readonly, nonatomic) BOOL didSucceedSending;
@property (readonly, nonatomic) unsigned long long successfulResponseCount;
@property (nonatomic) BOOL didNotifyDeviceReachability;
@property (readonly, nonatomic) HMDNetworkActivityWrapper *messageNetworkActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)done;
- (void)timerDidFire:(id)a0;
- (void)completeSendingOverTransport:(id)a0 withError:(id)a1;
- (id)initWithMessage:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2 dateProvider:(id)a3 timerProvider:(id)a4;
- (id)initWithMessage:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2 dateProvider:(id)a3 timerProvider:(id)a4 activityFactory:(id)a5 logEventSubmitter:(id)a6;
- (id)preparedMessageWithTimeout:(double)a0;
- (void)receivedResponseOverTransport:(id)a0 withError:(id)a1;
- (void)startResponseTimerWithTimeInterval:(double)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)startSendingOverTransport:(id)a0;
- (void)startTransportFallbackTimerWithTimeInterval:(double)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (double)timeoutRemaining;

@end
