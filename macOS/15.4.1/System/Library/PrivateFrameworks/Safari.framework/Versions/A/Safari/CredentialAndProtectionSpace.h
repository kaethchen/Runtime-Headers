@class NSURLProtectionSpace, NSURLCredential;

@interface CredentialAndProtectionSpace : NSObject

@property (readonly, nonatomic) NSURLCredential *credential;
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace;

- (void).cxx_destruct;
- (id)initWithCredential:(id)a0 protectionSpace:(id)a1;

@end
