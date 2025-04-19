@class NFUnfairLock, NSXPCConnection;

@interface NDANFHelperProxy : NSObject <FCANFHelper>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (nonatomic) long long xpcConnectionInterest;
@property (retain, nonatomic) NFUnfairLock *xpcConnectionLock;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)manifestFromANFDocumentData:(id)a0;
- (void)popInterest;
- (void)pushInterest;
- (id)_connectionToXPCService;
- (id)manifestFromANFDocumentData:(id)a0 reachedService:(BOOL *)a1;

@end
