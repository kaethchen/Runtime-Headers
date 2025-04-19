@class NSString;

@interface CRKSetUserImageResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *imageIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
