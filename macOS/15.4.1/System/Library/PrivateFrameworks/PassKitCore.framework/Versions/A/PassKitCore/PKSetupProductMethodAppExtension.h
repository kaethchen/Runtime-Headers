@class NSExtension;

@interface PKSetupProductMethodAppExtension : PKSetupProductMethod

@property (readonly, nonatomic) NSExtension *provisioningExtension;
@property (nonatomic) BOOL requiresAuthorization;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCode:(id)a0;
- (void)_decorateDescription:(id)a0;
- (id)initWithExtension:(id)a0 status:(BOOL)a1;

@end
