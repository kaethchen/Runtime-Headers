@class NSImage, NSImageSymbolConfiguration, NSFont, NSColor;

@interface AMSUIDashboardMessageAppearance : AMSUIAppearance <NSCopying>

@property (retain) NSColor *accessoryButtonColor;
@property (retain) NSFont *accessoryButtonFont;
@property (retain) NSColor *backgroundColor;
@property (retain) NSImage *backgroundImage;
@property (retain) NSColor *footerButtonColor;
@property (retain) NSFont *footerButtonFont;
@property long long iconAnimationPlayCount;
@property (retain) NSImageSymbolConfiguration *imageSymbolConfiguration;
@property (retain) NSColor *imageTintColor;
@property (retain) NSFont *messageFont;
@property (retain) NSColor *messageTextColor;
@property (retain) NSColor *separatorColor;
@property long long primaryImageRenderingMode;
@property (retain) NSFont *titleFont;
@property (retain) NSColor *titleTextColor;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
