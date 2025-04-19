@protocol HMFMessageTransportDelegate;

@interface HMFMessageTransport : HMFObject

@property (weak) id<HMFMessageTransportDelegate> delegate;

- (void).cxx_destruct;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;

@end
