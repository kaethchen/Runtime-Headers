@class NSString;

@interface TKTokenPasswordAuthOperation : TKTokenAuthOperation

@property (copy) NSString *localizedPasswordLabel;
@property (copy) NSString *password;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)baseClassForUI;
- (void)importOperation:(id)a0;

@end
