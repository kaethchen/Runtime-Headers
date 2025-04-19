@class NSString, NSXPCConnection;
@protocol AMPLClientProtocol, AMPLMediaAppClientEventsProtocol;

@interface AMPLClient : NSObject

@property (weak, nonatomic) id<AMPLClientProtocol> reconnectionDelegate;
@property (weak, nonatomic) id<AMPLMediaAppClientEventsProtocol> libraryEventsDelegate;
@property (retain, nonatomic) NSXPCConnection *connectionToService;
@property (nonatomic) unsigned long long clientType;
@property (nonatomic) BOOL mediaDomainsOpened;
@property (nonatomic) BOOL lostConnection;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) unsigned long long mediaDomains;
@property (readonly, nonatomic) BOOL registered;
@property (readonly, nonatomic) unsigned int clientID;
@property (readonly, nonatomic) unsigned long long mediaDomainsPersistentID;
@property (readonly, nonatomic) unsigned long long persistentMachineID;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)connect;
- (void)cleanupConnectionToService;
- (void)clientIDRegistered:(unsigned int)a0;
- (void)closeMediaDomains:(id /* block */)a0;
- (id)ensureConnectedToService;
- (id)initWithType:(unsigned long long)a0 andClientInfo:(id)a1 withMediaDomains:(unsigned long long)a2;
- (BOOL)isRegistered:(id *)a0;
- (void)mediaDomainsOpened:(id)a0;
- (void)onConnectionLost:(BOOL)a0;
- (id)remoteRegisteredObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)setPersistentMachineID:(unsigned long long)a0;

@end
