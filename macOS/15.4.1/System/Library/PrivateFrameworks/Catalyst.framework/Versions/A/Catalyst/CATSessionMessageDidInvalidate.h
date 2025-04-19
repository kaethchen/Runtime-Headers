@class NSError;

@interface CATSessionMessageDidInvalidate : CATSessionMessage

@property (copy, nonatomic) NSError *error;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0;

@end
