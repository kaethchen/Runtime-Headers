@class NSString;
@protocol DMTProfileInstallationPrimitives;

@interface DMTUninstallProfileOperation : CATOperation

@property (readonly, nonatomic) id<DMTProfileInstallationPrimitives> primitives;
@property (readonly, nonatomic) NSString *profileIdentifier;

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)main;
- (id)initWithProfileInstallationPrimitives:(id)a0 profileIdentifier:(id)a1;
- (void)uninstallProfile;

@end
