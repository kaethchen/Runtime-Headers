@class NSArray, NSString;

@interface XARSignerDefaultSignatureProvider : NSObject <XARSignatureProvider>

@property (copy) id /* block */ cmsCertificatesBlock;
@property (copy) id /* block */ rsaCertificatesBlock;
@property (copy) id /* block */ CMSSignatureBlock;
@property (copy) id /* block */ RSASignatureBlock;
@property (readonly) BOOL shouldSignWithCMS;
@property (readonly) NSArray *CMSCertificates;
@property (readonly) BOOL shouldSignWithRSA;
@property (readonly) NSArray *RSACertificates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
