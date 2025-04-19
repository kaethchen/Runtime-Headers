@class NSColor;

@interface NSTintConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) NSTintConfiguration *defaultTintConfiguration;
@property (class, readonly) NSTintConfiguration *monochromeTintConfiguration;
@property (class, readonly) BOOL supportsSecureCoding;

@property (setter=_setType:) long long _type;
@property (copy, setter=_setTintColor:) NSColor *_tintColor;
@property (setter=_setAllowsAccentOverride:) BOOL _allowsAccentOverride;
@property (readonly) NSColor *_sidebarRowTintColor;
@property (readonly) NSColor *baseTintColor;
@property (readonly) NSColor *equivalentContentTintColor;
@property (readonly) BOOL adaptsToUserAccentColor;

+ (id)tintConfigurationWithFixedColor:(id)a0;
+ (id)tintConfigurationWithPreferredColor:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
