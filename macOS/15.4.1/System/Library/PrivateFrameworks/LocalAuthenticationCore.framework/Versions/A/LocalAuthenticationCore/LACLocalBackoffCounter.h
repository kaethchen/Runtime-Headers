@interface LACLocalBackoffCounter : NSObject <LACBackoffCounter>

- (void)actionBackoffWithReply:(id /* block */)a0;
- (void)actionFailureWithReply:(id /* block */)a0;
- (void)actionSuccess;
- (void)currentBackoffErrorWithReply:(id /* block */)a0;

@end
