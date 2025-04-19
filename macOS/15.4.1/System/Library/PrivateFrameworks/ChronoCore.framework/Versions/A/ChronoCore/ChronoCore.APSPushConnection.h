@interface ChronoCore.APSPushConnection : NSObject <APSConnectionDelegate> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (void).cxx_destruct;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forInfo:(id)a2;

@end
