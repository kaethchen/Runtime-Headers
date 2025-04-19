@class NSString, NSDictionary, NSData;

@interface WFFollowUpActionExecutionDialogRequest : WFDialogRequest

@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSDictionary *parameterValues;
@property (readonly, nonatomic) unsigned long long showOutputActionOptions;
@property (readonly, nonatomic) NSData *encodedToolInvocation;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 actionIdentifier:(id)a1 parameterValues:(id)a2 showOutputActionOptions:(unsigned long long)a3 encodedToolInvocation:(id)a4;

@end
