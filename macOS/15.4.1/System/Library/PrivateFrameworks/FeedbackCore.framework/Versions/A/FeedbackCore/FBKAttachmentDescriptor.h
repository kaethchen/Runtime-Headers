@class NSString, NSURL;

@interface FBKAttachmentDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *diagnosticExtensionIdentifier;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDescription:(id)a0 URL:(id)a1;
- (id)initWithDescription:(id)a0 diagnosticExtensionIdentifier:(id)a1;

@end
