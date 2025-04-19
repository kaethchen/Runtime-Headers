@class INIntent, NSString, NSSecurityScopedURLWrapper, WFImage, NSColor;

@interface WFWidgetConfigurationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSSecurityScopedURLWrapper *intentLocalizationTableBundleURL;
@property (readonly, nonatomic) NSSecurityScopedURLWrapper *widgetBundleScopedURL;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) long long family;
@property (readonly, nonatomic) unsigned long long widgetConfigurationStyle;
@property (readonly, nonatomic) unsigned long long resolvedWidgetConfigurationStyle;
@property (readonly, nonatomic) unsigned long long widgetConfigurationType;
@property (readonly, nonatomic) struct CGSize { double width; double height; } defaultCardSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialCardFrame;
@property (readonly, copy, nonatomic) NSString *widgetDisplayName;
@property (readonly, copy, nonatomic) NSString *fallbackDisplayName;
@property (readonly, copy, nonatomic) NSString *widgetDescription;
@property (readonly, nonatomic, getter=isWidgetExtensionInformationLoaded) BOOL widgetExtensionInformationLoaded;
@property (readonly, nonatomic) NSColor *widgetPrimaryColor;
@property (readonly, nonatomic) NSColor *widgetTintColor;
@property (readonly, nonatomic) BOOL usesWidgetAccentColor;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *remoteDeviceIdentifier;
@property (readonly, copy, nonatomic) NSString *remoteAppLocalizedName;
@property (readonly, copy, nonatomic) WFImage *remoteAppIcon;
@property (retain, nonatomic) INIntent *remoteLocalizedIntent;
@property (copy, nonatomic) NSString *remoteLanguageCode;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOptions:(id)a0;
- (id)initWithIntent:(id)a0 bundleIdentifier:(id)a1 intentLocalizationTableBundleURL:(id)a2 widgetBundleScopedURL:(id)a3 family:(long long)a4 widgetConfigurationStyle:(unsigned long long)a5 widgetConfigurationType:(unsigned long long)a6 defaultCardSize:(struct CGSize { double x0; double x1; })a7 initialCardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a8 widgetDisplayName:(id)a9 widgetDescription:(id)a10 usesWidgetAccentColor:(BOOL)a11 remoteDeviceIdentifier:(id)a12 remoteAppLocalizedName:(id)a13 remoteAppIcon:(id)a14;
- (id)initWithIntent:(id)a0 bundleIdentifier:(id)a1 intentLocalizationTableBundleURL:(id)a2 widgetBundleScopedURL:(id)a3 family:(long long)a4 widgetConfigurationStyle:(unsigned long long)a5 widgetConfigurationType:(unsigned long long)a6 defaultCardSize:(struct CGSize { double x0; double x1; })a7 initialCardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a8 widgetDisplayName:(id)a9 widgetDescription:(id)a10 widgetPrimaryColor:(id)a11 widgetTintColor:(id)a12 usesWidgetAccentColor:(BOOL)a13 remoteDeviceIdentifier:(id)a14 remoteAppLocalizedName:(id)a15 remoteAppIcon:(id)a16;
- (void)loadWidgetExtensionInformationWithCompletion:(id /* block */)a0;
- (void)startAccessingSecurityScopedBundleResource;

@end
