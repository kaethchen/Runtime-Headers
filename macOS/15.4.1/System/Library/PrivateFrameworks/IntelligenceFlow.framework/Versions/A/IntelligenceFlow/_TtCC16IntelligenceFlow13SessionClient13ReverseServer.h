@interface _TtCC16IntelligenceFlow13SessionClient13ReverseServer : _TtCs12_SwiftObject <LXSessionXPCClientProtocol> {
    void /* unknown type, empty encoding */ jsonDecoder;
    void /* unknown type, empty encoding */ state;
}

- (void)connectionClosedWith:(id /* block */)a0;
- (void)runTransactionHookWithSessionId:(id)a0 transaction:(id)a1 with:(id /* block */)a2;
- (void)sendWithMessageData:(id)a0 with:(id /* block */)a1;

@end
