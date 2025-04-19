@class WFEncodedTypedValue;

@interface WFToolKitParameterDialogResponse : WFDialogResponse

@property (retain, nonatomic) WFEncodedTypedValue *encodedTypedValue;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithEncodedTypedValue:(id)a0;

@end
