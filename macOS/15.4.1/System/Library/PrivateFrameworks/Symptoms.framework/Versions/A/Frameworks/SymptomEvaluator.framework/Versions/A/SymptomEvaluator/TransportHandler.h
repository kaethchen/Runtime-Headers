@class ReporterFilter;

@interface TransportHandler : NSObject {
    struct _transport_connection_s { } *_connection;
    unsigned long long _connectionId;
    void /* function */ *_writeFn;
    unsigned int _ackId;
    BOOL _readOutstanding;
    BOOL _filterUpdateOutstanding;
    BOOL _disabled;
    BOOL _sendEventOnClose;
    unsigned int _reporterId;
    const char *_reporterName;
    struct { unsigned int val[8]; } _auditToken;
    unsigned long long _pid;
    const char *_processName;
    const char *_bundleId;
    ReporterFilter *_reporterFilter;
    BOOL _verifiedDelegateSymptom;
    int _reporterVersion;
}

+ (void)initialize;
+ (void)requestExplicitDisconnectSymptom:(unsigned long long)a0;
+ (void)updateFilters:(unsigned long long)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)disconnect;
- (void)didReceiveEvent:(id)a0;
- (void)_sendAck:(unsigned int)a0;
- (void)_sendFilterUpdate;
- (void)connect:(struct _transport_connection_s { } *)a0 connId:(unsigned long long)a1 writefn:(void /* function */ *)a2 auditToken:(struct { unsigned int x0[8]; })a3 pid:(unsigned long long)a4 name:(char *)a5 verifiedDelegateSymptom:(BOOL)a6;
- (void)generateLibnetcoreSymptomSignpost:(id)a0;
- (void)receivePayload:(const void *)a0 length:(unsigned long long)a1;
- (void)startRead;

@end
