@class NSXPCConnection;
@protocol CFRRestrictionManaging;

@interface CFRRestrictionManagement : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) id<CFRRestrictionManaging> serviceProxy;
@property (copy, nonatomic) id /* block */ connectionErrorHandler;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithConnectionErrorHandler:(id /* block */)a0;

@end
