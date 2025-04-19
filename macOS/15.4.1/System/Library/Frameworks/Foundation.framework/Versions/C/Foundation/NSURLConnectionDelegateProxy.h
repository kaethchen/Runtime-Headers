@interface NSURLConnectionDelegateProxy : NSObject {
    id delegate;
    unsigned long long flags;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (void)setDelegate:(id)a0;
- (void)connection:(id)a0 didReceiveDataArray:(id)a1;
- (BOOL)connection:(id)a0 canAuthenticateAgainstProtectionSpace:(id)a1;
- (void)connection:(id)a0 didCancelAuthenticationChallenge:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1 lengthReceived:(long long)a2;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didSendBodyData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (id)connection:(id)a0 willCacheResponse:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connectionDidFinishLoading:(id)a0;
- (BOOL)connectionShouldUseCredentialStorage:(id)a0;

@end
