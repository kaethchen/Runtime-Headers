@class NSString;

@interface AKTextFieldAnnotation : AKTextBoxAnnotation

@property (copy) NSString *fieldName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
