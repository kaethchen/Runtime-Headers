@class NSData;

@interface CRKFetchResourceResultObject : CATTaskResultObject

@property (retain, nonatomic) NSData *resourceData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
