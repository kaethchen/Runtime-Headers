@interface IMAP2Helpers.CertUIPrompt : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ underlying;
    void /* unknown type, empty encoding */ _setTrust;
    void /* unknown type, empty encoding */ _setHostname;
    void /* unknown type, empty encoding */ _setService;
    void /* unknown type, empty encoding */ _show;
}

- (void)setHost:(id)a0;
- (void)setService:(id)a0;
- (void)setTrust:(struct __SecTrust { } *)a0;
- (void)showPromptWithOptions:(id)a0 responseBlock:(id /* block */)a1;

@end
