@class NSArray, NSURL, NSString;

@interface TVISAerialScreenSaver : NSObject <BSDescriptionProviding, TVISScreenSaver>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) NSURL *localizedStringsBundleURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long type;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithAssets:(id)a0 categories:(id)a1 localizedStringsBundleURL:(id)a2;
- (id)initWithConfiguration:(id)a0 preferredLocalizations:(id)a1;
- (id)initWithConfiguration:(id)a0 preferredLocalizations:(id)a1 store:(id)a2;

@end
