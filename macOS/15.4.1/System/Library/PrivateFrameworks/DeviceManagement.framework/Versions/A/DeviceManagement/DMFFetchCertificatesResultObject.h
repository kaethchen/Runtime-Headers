@class NSArray;

@interface DMFFetchCertificatesResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *certificates;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCertificates:(id)a0;

@end
