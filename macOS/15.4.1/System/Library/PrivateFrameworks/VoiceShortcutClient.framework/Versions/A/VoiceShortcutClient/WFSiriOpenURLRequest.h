@class NSURL, NSString;

@interface WFSiriOpenURLRequest : WFSiriActionRequest

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 andBundleIdentifier:(id)a1;

@end
