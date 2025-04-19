@class MKSRPServer, NSObject;
@protocol OS_dispatch_queue, OS_nw_connection;

@interface SMNCertificateExchange : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_nw_connection> *connection;
@property (retain) MKSRPServer *srp;

- (void).cxx_destruct;
- (void)disconnect;
- (BOOL)connect;
- (id)errorWithCode:(unsigned long long)a0 description:(id)a1;
- (BOOL)sendData:(id)a0;
- (BOOL)exchangeCertificate:(id)a0 remoteCertificate:(id *)a1 error:(id *)a2;
- (BOOL)sendFrame:(id)a0 error:(id *)a1;
- (BOOL)exchangeCertificate:(id)a0 remoteCertificate:(id *)a1;
- (id)initWithHost:(id)a0 port:(id)a1 username:(id)a2 password:(id)a3;
- (id)receiveDataOfLength:(unsigned int)a0;
- (id)receiveFrameWithError:(id *)a0;

@end
