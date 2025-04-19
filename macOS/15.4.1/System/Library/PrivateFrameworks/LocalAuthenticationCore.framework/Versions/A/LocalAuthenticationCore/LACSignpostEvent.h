@interface LACSignpostEvent : NSObject {
    id /* block */ _sendBlock;
}

- (void).cxx_destruct;
- (void)send;
- (void)_sendWithMessage:(id)a0;
- (id)initWithSendBlock:(id /* block */)a0;
- (void)sendWithMessage:(id)a0;

@end
