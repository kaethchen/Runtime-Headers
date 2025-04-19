@class NSImage;

@interface ASCredentialRequestIconGenerator : NSObject

@property (class, readonly, nonatomic) NSImage *passwordManagerIcon;
@property (class, readonly, nonatomic) NSImage *systemPasskeyIcon;
@property (class, readonly, nonatomic) NSImage *systemPasswordIcon;
@property (class, readonly, nonatomic) NSImage *systemSecurityKeysIcon;
@property (class, readonly, nonatomic) NSImage *alternativeSecurityKeysIcon;

+ (id)_systemImageNamed:(id)a0;
+ (id)_iconForPasswordProviderBundleIdentifier:(id)a0;
+ (id)_iconForPresentationContext:(id)a0 size:(struct CGSize { double x0; double x1; })a1 outIconStyle:(long long *)a2;
+ (id)_imageForIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)_keychainIcon;
+ (id)_providerIconForPasswordLoginChoice:(id)a0;
+ (id)_systemBiometricsIconForPresentationContext:(id)a0;
+ (id)headerIconForPresentationContext:(id)a0;
+ (id)headerIconForPresentationContext:(id)a0 outIconStyle:(long long *)a1;
+ (id)iconForApplicationIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)iconForData:(id)a0 scale:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)iconForPasswordLoginChoice:(id)a0 presentationContext:(id)a1;
+ (id)iconForPublicKeyCredentialLoginChoiceWithPresentationContext:(id)a0;
+ (id)passwordManagerIconWithSize:(struct CGSize { double x0; double x1; })a0;

@end
