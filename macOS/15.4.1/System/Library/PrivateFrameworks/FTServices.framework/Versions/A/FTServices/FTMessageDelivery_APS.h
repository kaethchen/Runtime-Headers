@class NSString, NSArray, NSMutableDictionary, IDSOffGridConnectionMonitor, NSMutableArray;
@protocol FTMessageDeliveryAPSMobileNetworkManager;

@interface FTMessageDelivery_APS : FTMessageDelivery <FTMessageQueueDelegate, APSConnectionDelegate> {
    id<FTMessageDeliveryAPSMobileNetworkManager> _mobileNetworkManager;
    IDSOffGridConnectionMonitor *_offGridConnectionMonitor;
    Class _APSOutgoingMessageClass;
    NSMutableArray *_enabledTopics;
    NSArray *_ultraConstrainedTopics;
    NSMutableDictionary *_ftMessageMap;
    NSMutableDictionary *_startDateMap;
    NSMutableDictionary *_bodyMap;
    NSMutableDictionary *_apsMessageMap;
    NSMutableDictionary *_timerMap;
    NSMutableDictionary *_deathTimerMap;
    NSMutableDictionary *_retriesMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)sendMessage:(id)a0;
- (void)connection:(id)a0 didChangeConnectedStatus:(BOOL)a1;
- (void)connection:(id)a0 didFailToSendOutgoingMessage:(id)a1 error:(id)a2;
- (void)connection:(id)a0 didReceiveMessageForTopic:(id)a1 userInfo:(id)a2;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didSendOutgoingMessage:(id)a1;
- (void)cancelMessage:(id)a0;
- (void)_setEnabledTopics:(id)a0;
- (BOOL)busy;
- (void)_powerLogEvent:(id)a0 dictionary:(id)a1;
- (void)_updateTopics;
- (id)allMessages;
- (void)_messageAckGracePeriodTimedOut:(id)a0;
- (void)_apsMessageBodyForMessage:(id)a0 completion:(id /* block */)a1;
- (void)_apsMessageForMessage:(id)a0 body:(id)a1 completion:(id /* block */)a2;
- (id)_apsOutgoingMessageForFTMessage:(id)a0;
- (id)_bodyForMessage:(id)a0;
- (void)_clearMapForMessageID:(id)a0;
- (id)_currentAPSMessages;
- (id)_currentMessages;
- (id)_currentTimers;
- (void)_dequeueIfNeeded;
- (BOOL)_fillMessageParameters:(id *)a0 ftMessage:(id *)a1;
- (void)_invalidateDeathTimerForMessageID:(id)a0;
- (void)_invalidateTimerForMessageID:(id)a0;
- (BOOL)_isBusyWithMessage:(id)a0;
- (void)_messageACKTimedOut:(id)a0;
- (void)_messageCompletelyTimedOut:(id)a0;
- (id)_messageForAPSOutgoingMessage:(id)a0;
- (void)_messageNeedsRetry:(id)a0;
- (void)_messageSendTimedOut:(id)a0;
- (void)_noteMessageACKd:(id)a0 ftMessage:(id)a1;
- (void)_noteMessageFailed:(id)a0 ftMessage:(id)a1 retryBehavior:(int)a2 error:(id)a3;
- (void)_noteMessageSent:(id)a0 ftMessage:(id)a1 body:(id)a2;
- (void)_noteMessageSucceeded:(id)a0 ftMessage:(id)a1 error:(id)a2 result:(id)a3 resultCode:(long long)a4;
- (void)_notifyDelegateAboutError:(id)a0 resultCode:(long long)a1 forMessage:(id)a2;
- (id)_requiredTopicsWithUltraConstrainedTopics:(id *)a0;
- (long long)_retryCountForMessage:(id)a0;
- (void)_sendMessage:(id)a0 ftMessage:(id)a1;
- (BOOL)_sendMessageAsynchronously:(id)a0 error:(id *)a1;
- (void)_serverBagLoaded:(id)a0;
- (void)_setMapForMessage:(id)a0 apsMessage:(id)a1 messageBody:(id)a2 timeoutTime:(double)a3 timeoutSelector:(SEL)a4 handlerBlock:(id /* block */)a5 retries:(id)a6;
- (BOOL)_shouldSendSOSForFailure:(id)a0;
- (void)cancelMessage:(id)a0 withError:(long long)a1;
- (id)initWithAPSConnection:(id)a0;
- (id)initWithAPSConnection:(id)a0 mobileNetworkManager:(id)a1;
- (long long)maxLargeMessageSize;
- (long long)maxMessageSize;
- (void)queue:(id)a0 hitTimeoutForMessage:(id)a1;
- (BOOL)shouldFailFastForMessage:(id)a0;

@end
