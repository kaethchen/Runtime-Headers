@class WFColor, NSString, WFIcon, NSData;

@interface WFConfiguredStaccatoAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) WFColor *tintColor;
@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) WFIcon *previewIcon;
@property (copy, nonatomic) NSString *associatedBundleIdentifier;
@property (copy, nonatomic) NSData *shortcutsMetadata;
@property (readonly, copy, nonatomic) NSData *colorScheme;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 associatedBundleIdentifier:(id)a1 name:(id)a2 previewIcon:(id)a3 shortcutsMetadata:(id)a4;
- (id)initWithIdentifier:(id)a0 associatedBundleIdentifier:(id)a1 name:(id)a2 previewIcon:(id)a3 shortcutsMetadata:(id)a4 colorScheme:(id)a5;
- (id)initWithIdentifier:(id)a0 sectionIdentifier:(id)a1 associatedBundleIdentifier:(id)a2 name:(id)a3 systemImageName:(id)a4 shortcutsMetadata:(id)a5;
- (BOOL)isSystemStaccatoAction;
- (BOOL)usesPreviewIconSymbolOverride;

@end
