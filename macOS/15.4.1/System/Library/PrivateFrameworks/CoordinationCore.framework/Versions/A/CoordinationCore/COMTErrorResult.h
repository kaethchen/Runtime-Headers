@class NSError;

@interface COMTErrorResult : COMTResult

@property (readonly, nonatomic) NSError *error;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0 actionIdentifier:(id)a1;

@end
