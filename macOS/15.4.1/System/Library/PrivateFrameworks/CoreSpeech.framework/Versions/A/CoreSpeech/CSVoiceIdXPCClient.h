@class NSObject;
@protocol OS_xpc_object;

@interface CSVoiceIdXPCClient : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;

+ (void)notifyImplicitUtterance:(id)a0 appContainerName:(id)a1 audioDeviceType:(id)a2 audioRecordType:(id)a3 voiceTriggerEventInfo:(id)a4 otherCtxt:(id)a5 completion:(id /* block */)a6;
+ (void)notifyImplicitUtterance:(id)a0 audioDeviceType:(id)a1 audioRecordType:(id)a2 voiceTriggerEventInfo:(id)a3 otherCtxt:(id)a4 completion:(id /* block */)a5;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (id)_decodeError:(id)a0;
- (void)_handleListenerError:(id)a0;
- (void)_handleListenerEvent:(id)a0;
- (void)_notifyImplicitUtterance:(id)a0 appContainerName:(id)a1 audioDeviceType:(id)a2 audioRecordType:(id)a3 voiceTriggerEventInfo:(id)a4 otherCtxt:(id)a5 completion:(id /* block */)a6;
- (void)_sendMessage:(id)a0 connection:(id)a1 completion:(id /* block */)a2;

@end
