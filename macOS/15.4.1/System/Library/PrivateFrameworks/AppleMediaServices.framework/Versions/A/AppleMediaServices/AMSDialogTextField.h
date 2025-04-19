@class NSString;

@interface AMSDialogTextField : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long keyboardType;
@property (copy) NSString *placeholder;
@property BOOL secure;
@property long long tag;
@property (copy) NSString *text;

+ (id)textFieldWithPlaceholder:(id)a0 secure:(BOOL)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
