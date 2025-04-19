@class NSString, NSData, NSError, NSMutableData;
@protocol AMSBagProtocol;

@interface AMSMescalFairplaySession : NSObject {
    void /* unknown type, empty encoding */ mescalType;
    void /* unknown type, empty encoding */ cachedCertificateProvider;
    void /* unknown type, empty encoding */ certificateCacher;
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithMescalType:(long long)a0 cachedCertificateProvider:(id /* block */)a1 certificateCacher:(id /* block */)a2;
- (void)primeSignatureForData:(NSData *)a0 bag:(id<AMSBagProtocol>)a1 logKey:(NSString *)a2 completionHandler:(void (^)(NSData *, NSError *))a3;
- (void)signData:(NSData *)a0 bag:(id<AMSBagProtocol>)a1 logKey:(NSString *)a2 completionHandler:(void (^)(NSData *, NSError *))a3;
- (void)verifyData:(NSMutableData *)a0 signature:(NSData *)a1 bag:(id<AMSBagProtocol>)a2 logKey:(NSString *)a3 completionHandler:(void (^)(BOOL, NSError *))a4;
- (void)verifyPrimeSignature:(NSData *)a0 completionHandler:(void (^)(BOOL, NSError *))a1;

@end
