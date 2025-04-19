@class NSData;

@interface CRKGenerateIdentityResultObject : CATTaskResultObject

@property (copy, nonatomic) NSData *certificateData;
@property (copy, nonatomic) NSData *privateKeyData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
