@interface ChronoServices.ControlsClient : NSObject <CHSControlsXPCClient> {
    void /* unknown type, empty encoding */ _calloutQueue;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _queue_connection;
    void /* unknown type, empty encoding */ _queue_controlHosts;
    void /* unknown type, empty encoding */ _lock;
    void /* unknown type, empty encoding */ _lock_subscriptions;
    void /* unknown type, empty encoding */ _lock_sandboxExtensions;
    void /* unknown type, empty encoding */ _lock_environmentData;
    void /* unknown type, empty encoding */ _calloutQueue_liveControlsDidChangePublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_liveControlsDidChangePublisher;
    void /* unknown type, empty encoding */ _calloutQueue_previewControlsDidChangePublisher;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previewControlsDidChangePublisher;
    void /* unknown type, empty encoding */ handleSystemEnvironmentDidChange;
}

- (id)init;
- (void).cxx_destruct;
- (void)liveControlsDidChange:(id)a0;
- (void)previewControlsDidChange:(id)a0;
- (void)systemEnvironmentDidChange:(id)a0;

@end
