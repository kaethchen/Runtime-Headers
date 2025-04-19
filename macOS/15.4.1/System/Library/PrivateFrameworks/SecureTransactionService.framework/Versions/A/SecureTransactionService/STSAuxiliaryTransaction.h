@class NSError, STSAuxiliaryCredential;

@interface STSAuxiliaryTransaction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) STSAuxiliaryCredential *credential;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)didSucceed;
- (id)initWithCredential:(id)a0 error:(id)a1;

@end
