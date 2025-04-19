@class NSString, NSXPCConnection;

@interface SRReaderLongTermBackend : NSObject <SRReaderStorageBackend> {
    BOOL _connectionDidInvalidate;
    NSString *_sensor;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (void)initialize;
+ (id)clientInterface;
+ (id)remoteInterface;
+ (id)connectionToEndpoint;

- (void)dealloc;
- (id)init;
- (void)setupConnection;
- (void)continueFetchRequest:(id)a0 samples:(id)a1 timestamp:(double)a2 cursor:(id)a3 fetchState:(unsigned long long)a4 error:(id)a5 withCallback:(id /* block */)a6;
- (void)fetch:(id)a0 withCallback:(id /* block */)a1;
- (void)fetchDevices:(id)a0 reply:(id /* block */)a1;
- (void)fetchReaderMetadata:(id)a0 reply:(id /* block */)a1;
- (id)initWithSensor:(id)a0 xpcConnection:(id)a1;
- (void)startRecording:(id)a0 reply:(id /* block */)a1;
- (void)stopRecording:(id)a0 reply:(id /* block */)a1;

@end
