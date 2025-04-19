@class NSDictionary;

@interface Sage.BindingVariablesXPCEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _bindingVariables;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSDictionary *_bindingVariables;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
