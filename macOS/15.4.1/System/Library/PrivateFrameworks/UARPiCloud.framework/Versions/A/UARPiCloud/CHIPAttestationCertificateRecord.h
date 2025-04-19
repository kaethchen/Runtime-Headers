@class NSString, CKRecord, NSObject;
@protocol OS_os_log;

@interface CHIPAttestationCertificateRecord : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_os_log> *_log;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *recordName;
@property (readonly) CKRecord *ckRecord;
@property (readonly) NSString *signature;
@property (readonly) NSString *verificationCertificateID;
@property (readonly) NSString *rootCertificate;
@property (readonly) NSString *intermediateCertificates;
@property (readonly) NSString *recordStatus;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCKRecord:(id)a0;

@end
