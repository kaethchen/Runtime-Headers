@class NSString;

@interface CRKIdentitySharingRequestCertificateRequest : CATTaskRequest

@property (retain, nonatomic) NSString *recipient;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
