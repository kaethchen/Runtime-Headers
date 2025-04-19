@class AXIPCMessage;

@interface AXIPCDelayedMessage : NSObject

@property (retain, nonatomic) AXIPCMessage *message;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 completion:(id /* block */)a1;

@end
