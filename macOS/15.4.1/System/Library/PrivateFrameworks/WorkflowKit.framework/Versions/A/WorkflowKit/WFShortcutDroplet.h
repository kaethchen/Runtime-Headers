@class NSString, NSURL, NSData, WFWorkflowReference, WFFileRepresentation;

@interface WFShortcutDroplet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) WFWorkflowReference *reference;
@property (readonly, nonatomic) NSData *serializedLNAction;
@property (readonly, nonatomic) NSString *linkActionIdentifier;
@property (readonly, nonatomic) NSString *linkBundleIdentifier;
@property (readonly, nonatomic) WFFileRepresentation *bundle;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReference:(id)a0 bundle:(id)a1;
- (id)initWithReference:(id)a0 bundleURL:(id)a1;
- (id)initWithSerializedLNAction:(id)a0 actionIdentifier:(id)a1 bundleIdentifier:(id)a2 bundle:(id)a3;
- (id)initWithSerializedLNAction:(id)a0 actionIdentifier:(id)a1 bundleIdentifier:(id)a2 bundleURL:(id)a3;

@end
