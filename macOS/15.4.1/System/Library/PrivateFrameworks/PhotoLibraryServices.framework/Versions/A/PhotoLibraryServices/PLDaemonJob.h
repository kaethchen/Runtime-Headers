@class PLXPCTransaction, NSXPCConnection, PLLibraryServicesManager, PLAssetsdClient, NSObject;
@protocol OS_xpc_object;

@interface PLDaemonJob : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> *_xpcReply;
    PLXPCTransaction *_transaction;
    id /* block */ _replyHandler;
    unsigned long long _signpostId;
    PLLibraryServicesManager *_libraryServicesManager;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) NSObject<OS_xpc_object> *xpcReply;
@property (retain, nonatomic) NSXPCConnection *clientConnection;
@property (retain, nonatomic) PLLibraryServicesManager *libraryServicesManager;
@property (copy, nonatomic) id /* block */ replyHandler;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcReply;
@property (retain, nonatomic) NSXPCConnection *clientConnection;
@property (readonly, nonatomic) PLAssetsdClient *assetsdClient;

+ (void)runDaemonSideWithXPCEvent:(id)a0 libraryServicesManager:(id)a1;

- (id)description;
- (id)init;
- (void)run;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAssetsdClient:(id)a0;
- (long long)daemonOperation;
- (void)archiveXPCToDisk:(id)a0;
- (void)encodeToXPCObject:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (id)newDictionaryReplyForObject:(id)a0;
- (void)runDaemonSide;
- (void)sendToAssetsd;
- (void)sendToAssetsdWithCompletionHandler:(id /* block */)a0;
- (BOOL)shouldArchiveXPCToDisk;
- (BOOL)shouldRunOnDaemonSerialQueue;

@end
