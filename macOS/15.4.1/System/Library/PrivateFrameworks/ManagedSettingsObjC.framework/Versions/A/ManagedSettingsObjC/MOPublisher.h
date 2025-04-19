@interface MOPublisher : NSObject

- (id)sinkWithCompletion:(id /* block */)a0 receiveInput:(id /* block */)a1;
- (void)subscribe:(id)a0;
- (id)sinkWithReceiveInput:(id /* block */)a0;
- (id)initPublisher;
- (id)sinkWithRecieveInput:(id /* block */)a0;

@end
