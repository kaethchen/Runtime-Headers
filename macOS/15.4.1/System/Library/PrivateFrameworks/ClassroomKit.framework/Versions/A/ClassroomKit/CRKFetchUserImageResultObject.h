@class NSData;

@interface CRKFetchUserImageResultObject : CATTaskResultObject

@property (copy, nonatomic) NSData *userImageData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
