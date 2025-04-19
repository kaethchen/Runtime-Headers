@class NSString, MRPlayerPath;

@interface MRApplicationConnectionListener : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (void).cxx_destruct;
- (BOOL)handleIncomingConnection:(id)a0 requestInfo:(id)a1;
- (id)initWithServiceName:(id)a0 playerPath:(id)a1 incomingConnectionHandler:(id /* block */)a2;

@end
