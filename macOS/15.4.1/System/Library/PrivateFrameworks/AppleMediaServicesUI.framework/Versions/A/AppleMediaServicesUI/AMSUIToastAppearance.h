@class NSImage, NSImageSymbolConfiguration, NSFont, NSColor;

@interface AMSUIToastAppearance : AMSUIAppearance <NSCopying>

@property (retain) NSColor *accessoryButtonColor;
@property (retain) NSFont *accessoryButtonFont;
@property (retain) NSColor *backgroundColor;
@property (retain) NSImage *backgroundImage;
@property (retain) NSImageSymbolConfiguration *imageSymbolConfiguration;
@property long long iconAnimationPlayCount;
@property (retain) NSColor *imageTintColor;
@property (retain) NSFont *messageFont;
@property (retain) NSColor *messageTextColor;
@property long long primaryImageRenderingMode;
@property (retain) NSFont *titleFont;
@property (retain) NSColor *titleTextColor;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
