@interface AudioAnalytics.MessageCache : _TtCs12_SwiftObject <AudioAnalytics.ServerProtocol> {
    void /* unknown type, empty encoding */ caches;
}

- (void)stopSessionFor:(long long)a0;
- (void)createSessionWith:(long long)a0;
- (void)destroySessionFor:(long long)a0;
- (void)getServiceNameFor:(long long)a0 completion:(id /* block */)a1;
- (void)getTailspinSessionIDFor:(long long)a0 reply:(id /* block */)a1;
- (void)requestMessageFor:(long long)a0 category:(unsigned int)a1 type:(unsigned short)a2 reply:(id /* block */)a3;
- (void)sendWithMessage:(id)a0 with:(unsigned int)a1 and:(unsigned short)a2 for:(long long)a3;
- (void)setWithConfiguration:(id)a0 for:(long long)a1;
- (void)setWithServiceType:(unsigned short)a0 for:(long long)a1;
- (void)startSessionFor:(long long)a0;
- (void)validateFor:(long long)a0 completion:(id /* block */)a1;

@end
