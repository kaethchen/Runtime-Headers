@class NSString, STUserIdentity, STExecutableIdentity;

@interface STAttributedEntity : NSObject <BSDebugDescriptionProviding, NSSecureCoding, BSDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STExecutableIdentity *executableIdentity;
@property (readonly, copy, nonatomic) STUserIdentity *userIdentity;
@property (readonly, copy, nonatomic) NSString *website;
@property (readonly, nonatomic, getter=isSystemService) BOOL systemService;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *localizedExecutableDisplayName;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, copy, nonatomic) NSString *bundlePath;
@property (readonly, copy, nonatomic) NSString *executablePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genericSystemServicesEntity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithExecutablePath:(id)a0;
- (id)initWithBundlePath:(id)a0;
- (id)initWithExecutableIdentity:(id)a0;
- (id)initWithExecutableIdentity:(id)a0 systemService:(BOOL)a1;
- (id)initWithExecutableIdentity:(id)a0 userIdentity:(id)a1;
- (id)initWithExecutableIdentity:(id)a0 userIdentity:(id)a1 website:(id)a2;
- (id)initWithExecutableIdentity:(id)a0 userIdentity:(id)a1 website:(id)a2 systemService:(BOOL)a3;
- (id)initWithExecutableIdentity:(id)a0 userIdentity:(id)a1 website:(id)a2 systemService:(BOOL)a3 localizedDisplayName:(id)a4 localizedExecutableDisplayName:(id)a5;
- (id)initWithExecutableIdentity:(id)a0 website:(id)a1;
- (id)initWithExecutableIdentity:(id)a0 website:(id)a1 systemService:(BOOL)a2;
- (id)initWithExecutableIdentity:(id)a0 website:(id)a1 systemService:(BOOL)a2 localizedDisplayName:(id)a3 localizedExecutableDisplayName:(id)a4;
- (BOOL)matchesAttributedEntity:(id)a0;

@end
