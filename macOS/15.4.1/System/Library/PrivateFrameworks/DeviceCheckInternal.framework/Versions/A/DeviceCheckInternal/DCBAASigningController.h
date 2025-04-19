@class DCCryptoProxyImpl;

@interface DCBAASigningController : NSObject

@property (retain, nonatomic) DCCryptoProxyImpl *cryptoProxy;

- (void).cxx_destruct;
- (void)baaSignatureForData:(id)a0 completion:(id /* block */)a1;
- (void)baaSignaturesForData:(id)a0 completion:(id /* block */)a1;

@end
