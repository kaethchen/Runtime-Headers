@class NSString, TVISRetailDemoScreenSaver;
@protocol TVISScreenSaver;

@interface TVISScreenSaverConfiguration : NSObject <BSDescriptionProviding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<TVISScreenSaver> activeScreenSaver;
@property (readonly, nonatomic) TVISRetailDemoScreenSaver *retailDemoScreenSaver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)activeScreenSaverType;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithPreferredLocalizations:(id)a0;
- (void)activateScreenSaverType:(long long)a0;
- (long long)activeScreenSaverType;

@end
