@class NSImage, NSImageSymbolConfiguration, NSFont, NSColor;

@interface AMSUIAccountMessageAppearance : AMSUIAppearance <NSCopying>

@property (retain) NSColor *accessoryButtonColor;
@property (retain) NSFont *accessoryButtonFont;
@property (retain) NSColor *backgroundColor;
@property (retain) NSImage *backgroundImage;
@property (retain) NSColor *footerButtonColor;
@property (retain) NSFont *footerButtonFont;
@property long long iconAnimationPlayCount;
@property unsigned long long imageStyle;
@property (retain) NSImageSymbolConfiguration *imageSymbolConfiguration;
@property (retain) NSColor *imageTintColor;
@property long long impressionAnimationStyle;
@property (retain) NSFont *messageFont;
@property (retain) NSColor *messageTextColor;
@property long long primaryImageRenderingMode;
@property (retain) NSFont *titleFont;
@property (retain) NSColor *titleTextColor;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (long long)_animationStyleWithDictionary:(id)a0;
- (void)_setImageStyleWithDictionary:(id)a0;

@end
