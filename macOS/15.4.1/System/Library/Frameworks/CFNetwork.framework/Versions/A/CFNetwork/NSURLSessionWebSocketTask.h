@class NSData;

@interface NSURLSessionWebSocketTask : NSURLSessionTask

@property long long maximumMessageSize;
@property (readonly) long long closeCode;
@property (readonly, copy) NSData *closeReason;

- (void).cxx_destruct;
- (void)receiveMessageWithCompletionHandler:(id /* block */)a0;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendPingWithPongReceiveHandler:(id /* block */)a0;
- (void)cancelWithCloseCode:(long long)a0 reason:(id)a1;

@end
