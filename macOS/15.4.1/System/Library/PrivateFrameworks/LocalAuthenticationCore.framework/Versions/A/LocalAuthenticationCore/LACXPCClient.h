@class NSString, NSXPCConnection;

@interface LACXPCClient : NSObject <LACXPCClient>

@property (nonatomic) struct { unsigned int val[8]; } auditToken;
@property (nonatomic) int processId;
@property (nonatomic) unsigned int userId;
@property (weak, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
