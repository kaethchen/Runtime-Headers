@class NSString, NSData, NSThread;

@interface ILCBaseConnection : NSObject

@property (retain) NSString *hostname;
@property int servernonce;
@property int clientnonce;
@property (retain) NSString *password;
@property (retain) NSData *passwordHash;
@property (retain) NSThread *workThread;
@property int socket;

- (void)dealloc;
- (void).cxx_destruct;
- (void)disconnect;
- (int)sendCompletely:(id)a0;
- (void)startWorkThread;
- (void)_socketWorkThread:(id)a0;
- (BOOL)connectToServerOnPort:(char *)a0;
- (void)hashPasword;
- (id)initWithHostname:(id)a0 password:(id)a1;
- (int)readCandCPacket:(id *)a0;
- (id)securityHashForData:(id)a0;
- (int)sendSecurePacket:(struct { struct { unsigned int x0; int x1; char x2[0]; } x0; char x1[64]; char x2[0]; } *)a0;
- (void)socketWorkThread;

@end
