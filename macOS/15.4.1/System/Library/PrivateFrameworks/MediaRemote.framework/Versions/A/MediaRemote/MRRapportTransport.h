@class NSError, NSString, MRAVOutputDevice, RPCompanionLinkDevice, NSObject, MRCompanionLinkClient, MRExternalDeviceTransportConnection, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface MRRapportTransport : MRExternalDeviceTransport {
    NSError *_error;
    NSObject<OS_dispatch_queue> *_workerQueue;
    MRAVOutputDevice *_outputDevice;
    MRAVOutputDevice *_proxyOutputDevice;
    id _resetToken;
    id _disconnectToken;
    MRCompanionLinkClient *_client;
}

@property (class, readonly, nonatomic) NSUserDefaults *userDefaults;

@property (retain, nonatomic) NSString *sessionUID;
@property (retain, nonatomic) MRExternalDeviceTransportConnection *connection;
@property (retain, nonatomic) RPCompanionLinkDevice *targetDevice;

+ (id)_readConnectionRecordsFromDisk;
+ (void)_writeConnectionRecordsToDisk:(id)a0;
+ (void)resetPersistedConnections;

- (void)dealloc;
- (id)name;
- (void).cxx_destruct;
- (id)error;
- (long long)port;
- (id)uid;
- (void)setError:(id)a0;
- (id)hostname;
- (id)deviceInfo;
- (void)resetWithError:(id)a0;
- (void)_removeConnectionRecordFromDisk;
- (id)_generateSessionUID;
- (void)_persistConnectionRecordToDisk;
- (id)createConnectionWithUserInfo:(id)a0;
- (id)initWithOutputDevice:(id)a0;
- (id)initWithOutputDevice:(id)a0 proxyOutputDevice:(id)a1;
- (void)setShouldUseSystemAuthenticationPrompt:(BOOL)a0;
- (BOOL)shouldUseSystemAuthenticationPrompt;

@end
