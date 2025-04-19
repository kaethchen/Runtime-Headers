@class NSColor;

@interface AMSUIWebAppearance : NSObject <NSCopying>

@property (class, readonly) NSColor *defaultPlatformBackgroundColor;
@property (class, readonly) NSColor *systemBackgroundColor;
@property (class, readonly) NSColor *systemClearColor;
@property (class, readonly) NSColor *secondarySystemBackgroundColor;
@property (class, readonly) NSColor *tertiarySystemBackgroundColor;
@property (class, readonly) NSColor *systemGroupedBackgroundColor;
@property (class, readonly) NSColor *secondarySystemGroupedBackgroundColor;
@property (class, readonly) NSColor *tertiarySystemGroupedBackgroundColor;
@property (class, readonly) AMSUIWebAppearance *defaultAppearance;
@property (class, readonly) AMSUIWebAppearance *tableViewAppearance;

@property (retain) NSColor *backgroundColor;

+ (id)ams_tertiarySystemFillColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)updateBackgroundColorWithJSString:(id)a0;

@end
