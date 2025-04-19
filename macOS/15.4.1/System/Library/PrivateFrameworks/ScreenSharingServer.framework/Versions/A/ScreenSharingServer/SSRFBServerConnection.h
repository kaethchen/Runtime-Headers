@class NSString;
@protocol SSConnectionProxy;

@interface SSRFBServerConnection : NSObject <SSConnectionProxyDelegate, SSRFBServerConnectionProviding>

@property (nonatomic, getter=isConnected) BOOL connected;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (retain, nonatomic) id<SSConnectionProxy> connectionProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ outgoingDataHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (void)closeConnection;
- (void)openConnection;
- (void)stopSharing;
- (void)authorizeConnection;
- (id)initWithConnectionProxy:(id)a0;
- (void)proxy:(id)a0 didInvalidateWithError:(id)a1;
- (void)proxy:(id)a0 didRespond:(id)a1;
- (void)receivedData:(id)a0 fromParticipantHandle:(id)a1;
- (void)shareDisplay:(unsigned int)a0;
- (void)shareWindow:(unsigned int)a0;

@end
