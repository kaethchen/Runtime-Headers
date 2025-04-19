@class NSURL;

@interface ICPDFEncryptionStateChecker : NSObject <NSCopying>

@property (nonatomic) unsigned long long encryptionState;
@property (readonly, copy, nonatomic) NSURL *pdfURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPDFURL:(id)a0;

@end
