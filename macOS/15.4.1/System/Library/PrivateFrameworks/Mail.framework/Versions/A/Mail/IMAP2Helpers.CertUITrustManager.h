@interface IMAP2Helpers.CertUITrustManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ underlying;
    void /* unknown type, empty encoding */ _rawTrust;
    void /* unknown type, empty encoding */ _allow;
}

- (void)allowTrust:(struct __SecTrust { } *)a0 forHost:(id)a1 service:(id)a2;
- (unsigned int)rawTrustResultForSSLTrust:(struct __SecTrust { } *)a0 hostname:(id)a1 service:(id)a2;

@end
