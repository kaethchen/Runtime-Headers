@interface ScreenSharingKit.PlaybackServer : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ targetedDisplayIdentifier;
    void /* unknown type, empty encoding */ _interactionState;
    void /* unknown type, empty encoding */ _isActive;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ drawEventConsumerProvider;
    void /* unknown type, empty encoding */ controlEventConsumerProvider;
    void /* unknown type, empty encoding */ systemGestureEventConsumerProvider;
    void /* unknown type, empty encoding */ dragAndDropEventConsumerProvider;
    void /* unknown type, empty encoding */ clientStatusEventConsumer;
    void /* unknown type, empty encoding */ accessibilityMessageConsumer;
    void /* unknown type, empty encoding */ rtiMessageConsumerProvider;
    void /* unknown type, empty encoding */ statusEventProducer;
    void /* unknown type, empty encoding */ telemetry;
    void /* unknown type, empty encoding */ accessibilityMessageProducer;
    void /* unknown type, empty encoding */ interruptionHandler;
    void /* unknown type, empty encoding */ startupEventsQueue;
    void /* unknown type, empty encoding */ currentDrawEventConsumer;
    void /* unknown type, empty encoding */ currentControlEventConsumer;
    void /* unknown type, empty encoding */ currentSystemEventConsumer;
    void /* unknown type, empty encoding */ currentDragAndDropEventConsumer;
    void /* unknown type, empty encoding */ currentRTIMessageConsumer;
    void /* unknown type, empty encoding */ bufferedSendingContinuation;
    void /* unknown type, empty encoding */ sessionInvalidationContinuation;
    void /* unknown type, empty encoding */ drawEventCancellationHandle;
    void /* unknown type, empty encoding */ controlEventCancellationHandle;
    void /* unknown type, empty encoding */ systemEventCancellationHandle;
    void /* unknown type, empty encoding */ clientStatusEventCancellationHandle;
    void /* unknown type, empty encoding */ accessibilityEventCancellationHandle;
    void /* unknown type, empty encoding */ dragAndDropEventEventCancellationHandle;
    void /* unknown type, empty encoding */ rtiEventCancellationHandle;
    void /* unknown type, empty encoding */ outgoingStatusEventSubscription;
    void /* unknown type, empty encoding */ outgoingAccessibilityMessageSubscription;
}

@end
