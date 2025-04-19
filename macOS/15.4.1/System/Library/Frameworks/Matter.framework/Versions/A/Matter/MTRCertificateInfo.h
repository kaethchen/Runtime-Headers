@class MTRDistinguishedNameInfo, NSData, NSDate;

@interface MTRCertificateInfo : NSObject <NSCopying> {
    NSData *_bytes;
    struct ChipCertificateData { struct Span<const unsigned char> { char *mDataBuf; unsigned long long mDataLen; } mSerialNumber; struct ChipDN { struct ChipRDN { struct Span<const char> { char *mDataBuf; unsigned long long mDataLen; } mString; unsigned long long mChipVal; unsigned short mAttrOID; BOOL mAttrIsPrintableString; } rdn[5]; } mSubjectDN; struct ChipDN { struct ChipRDN { struct Span<const char> { char *mDataBuf; unsigned long long mDataLen; } mString; unsigned long long mChipVal; unsigned short mAttrOID; BOOL mAttrIsPrintableString; } rdn[5]; } mIssuerDN; struct FixedSpan<const unsigned char, 20UL> { char *mDataBuf; } mSubjectKeyId; struct FixedSpan<const unsigned char, 20UL> { char *mDataBuf; } mAuthKeyId; unsigned int mNotBeforeTime; unsigned int mNotAfterTime; struct FixedSpan<const unsigned char, 65UL> { char *mDataBuf; } mPublicKey; unsigned short mPubKeyCurveOID; unsigned short mPubKeyAlgoOID; unsigned short mSigAlgoOID; struct BitFlags<chip::Credentials::CertFlags, unsigned short> { unsigned short mValue; } mCertFlags; struct BitFlags<chip::Credentials::KeyUsageFlags, unsigned short> { unsigned short mValue; } mKeyUsageFlags; struct BitFlags<chip::Credentials::KeyPurposeFlags, unsigned char> { unsigned char mValue; } mKeyPurposeFlags; unsigned char mPathLenConstraint; struct FixedSpan<const unsigned char, 64UL> { char *mDataBuf; } mSignature; unsigned char mTBSHash[32]; } _data;
}

@property (readonly, retain) MTRDistinguishedNameInfo *issuer;
@property (readonly, retain) MTRDistinguishedNameInfo *subject;
@property (readonly, retain) NSDate *notBefore;
@property (readonly, retain) NSDate *notAfter;
@property (readonly, retain) NSData *publicKeyData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTLVBytes:(id)a0;

@end
