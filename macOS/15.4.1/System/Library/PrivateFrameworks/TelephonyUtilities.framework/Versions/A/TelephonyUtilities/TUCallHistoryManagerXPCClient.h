@class NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue, TUCallHistoryManagerXPCServer;

@interface TUCallHistoryManagerXPCClient : NSObject <TUCallHistoryManagerXPCClient, TUCallHistoryManagerDataSource>

@property (class, retain, nonatomic) id<TUCallHistoryManagerXPCServer> asynchronousServer;
@property (class, retain, nonatomic) id<TUCallHistoryManagerXPCServer> synchronousServer;
@property (class, readonly, nonatomic) NSXPCInterface *callHistoryManagerClientXPCInterface;
@property (class, readonly, nonatomic) NSXPCInterface *callHistoryManagerServerXPCInterface;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)callHistoryManagerAllowedClasses;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)handleServerDisconnect;
- (void)reportRecentCallForConversation:(id)a0 withStartDate:(id)a1 avMode:(unsigned long long)a2;
- (id)serverWithErrorHandler:(id /* block */)a0;
- (id)synchronousServerWithErrorHandler:(id /* block */)a0;
- (void)updateOutgoingLocalParticipantUUID:(id)a0 forCallsWithOutgoingLocalParticipantUUID:(id)a1;

@end
