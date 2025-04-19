@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface MOPersonalizedSensingServiceManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isGMSAvailable;
@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)generatePromptSuggestionWithTemplate:(id)a0 context:(id)a1 options:(id)a2;
+ (BOOL)isServiceDeployed;
+ (void)primeService;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)createConnection;
- (void)fetchPersonalizedContextWithOptions:(id)a0 withReply:(id /* block */)a1;
- (void)refreshMomentsContextWithReply:(id /* block */)a0;
- (void)_fetchPersonalizedSyncContextWithOptions:(id)a0 withReply:(id /* block */)a1;
- (void)notifyContextFeedback:(id)a0 withReply:(id /* block */)a1;
- (void)requestDBAccessForPersonalizedSensingServiceWithReply:(id /* block */)a0;

@end
