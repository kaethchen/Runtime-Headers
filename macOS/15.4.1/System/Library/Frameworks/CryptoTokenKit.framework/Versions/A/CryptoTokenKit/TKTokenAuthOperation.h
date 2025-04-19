@class NSError;

@interface TKTokenAuthOperation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSError *authenticationError;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)finishWithError:(id *)a0;
- (Class)baseClassForUI;
- (void)importOperation:(id)a0;

@end
