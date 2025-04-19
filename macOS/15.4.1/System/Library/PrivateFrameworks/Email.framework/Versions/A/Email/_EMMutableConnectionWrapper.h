@class NSXPCConnection;

@interface _EMMutableConnectionWrapper : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void).cxx_destruct;

@end
