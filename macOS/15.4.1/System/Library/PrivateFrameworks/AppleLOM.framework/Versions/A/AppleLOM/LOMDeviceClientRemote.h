@class OS_remote_device, OS_remote_service, OS_xpc_remote_connection;

@interface LOMDeviceClientRemote : LOMDeviceClient {
    OS_remote_device *_device;
    OS_remote_service *_service;
    OS_xpc_remote_connection *_connection;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)createConnection;
- (void)teardownXPCConnection;
- (BOOL)setupXPCConnection;
- (BOOL)install:(id)a0 error:(out id *)a1;
- (id)sendCommand:(id)a0 error:(id *)a1;

@end
