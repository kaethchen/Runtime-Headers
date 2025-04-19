@class NSXPCInterface;

@interface PODServiceWeakClientProxy : NSObject

@property (readonly, nonatomic) NSXPCInterface *clientInterface;
@property (readonly, weak, nonatomic) id protocolHandler;

- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithClientInterface:(id)a0 protocolHandler:(id)a1;

@end
