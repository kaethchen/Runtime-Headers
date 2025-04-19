@class SFCertificateData;

@interface SFCertificateTrust_ivars : NSObject {
    SFCertificateData *_certificateData;
}

- (void)dealloc;
- (id)certificateData;
- (void)setCertificateData:(id)a0;

@end
