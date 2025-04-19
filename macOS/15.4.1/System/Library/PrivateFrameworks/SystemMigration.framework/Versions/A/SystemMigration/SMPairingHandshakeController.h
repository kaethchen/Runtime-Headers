@class NSObject, NSUUID, MKCrypto, MKSRPServer, SMBluetoothServer;
@protocol OS_dispatch_queue;

@interface SMPairingHandshakeController : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) MKSRPServer *srp;
@property (retain) SMBluetoothServer *bluetoothServer;
@property (retain) NSUUID *centralID;
@property (retain) MKCrypto *crypto;

- (void).cxx_destruct;
- (id)errorWithCode:(unsigned char)a0 description:(id)a1;
- (id)errorWithCode:(unsigned char)a0 description:(id)a1 underlyingError:(id)a2;
- (BOOL)ensureSuccessResponseWithError:(id *)a0;
- (BOOL)exchangeCertificate:(id)a0 remoteCertificate:(id *)a1 error:(id *)a2;
- (id)initWithBluetoothServer:(id)a0 centralID:(id)a1 password:(id)a2;
- (BOOL)initializeSecurityWithError:(id *)a0;
- (id)performHandshakeWithParameters:(id)a0 error:(id *)a1;
- (id)readDataFrameWithError:(id *)a0;
- (BOOL)readHeader:(struct { unsigned char x0; unsigned char x1; unsigned short x2; } *)a0 error:(id *)a1;
- (id)readJSONUsingEncryption:(BOOL)a0 error:(id *)a1;
- (BOOL)sendAccessPointSSID:(id)a0 password:(id)a1 error:(id *)a2;
- (BOOL)writeDataFrame:(id)a0 error:(id *)a1;
- (BOOL)writeJSON:(id)a0 usingEncryption:(BOOL)a1 error:(id *)a2;
- (BOOL)writeResponse:(unsigned char)a0;

@end
