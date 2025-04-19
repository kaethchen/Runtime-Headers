@class GCHIDEventSystemClient, _GCCurrentSkylightSessionMonitor;

@interface _GCHIDEventIOKitClient : _GCHIDEventSubject {
    GCHIDEventSystemClient *_ioClient;
    _GCCurrentSkylightSessionMonitor *_sessionMonitorForControlCenter;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0 queue:(id)a1;

@end
