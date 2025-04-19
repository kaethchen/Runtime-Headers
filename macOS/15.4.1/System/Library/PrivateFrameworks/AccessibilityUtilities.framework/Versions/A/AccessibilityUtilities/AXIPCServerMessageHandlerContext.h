@interface AXIPCServerMessageHandlerContext : NSObject

@property (readonly, nonatomic) id /* block */ handler;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) BOOL async;

- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 async:(BOOL)a2;

@end
