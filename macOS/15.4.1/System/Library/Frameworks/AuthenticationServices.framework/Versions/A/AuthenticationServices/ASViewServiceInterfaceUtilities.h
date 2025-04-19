@class NSColor, NSImageSymbolConfiguration, NSFont;

@interface ASViewServiceInterfaceUtilities : NSObject

@property (class, readonly, nonatomic) NSFont *headerTitleFont;
@property (class, readonly, nonatomic) NSColor *headerTitleColor;
@property (class, readonly, nonatomic) NSFont *headerMessageFont;
@property (class, readonly, nonatomic) NSColor *headerMessageColor;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } headerIconSize;
@property (class, readonly, nonatomic) NSFont *cellTitleFont;
@property (class, readonly, nonatomic) NSColor *cellTitleColor;
@property (class, readonly, nonatomic) NSFont *cellSubtitleFont;
@property (class, readonly, nonatomic) NSColor *cellSubtitleColor;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } cellIconSize;
@property (class, readonly, nonatomic) NSColor *cellIconTintColor;
@property (class, readonly, nonatomic) NSImageSymbolConfiguration *cellIconPasskeySymbolConfiguration;
@property (class, readonly, nonatomic) double continueButtonHeight;
@property (class, readonly, nonatomic) double otherAccountsCellSizeFactor;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } otherAccountsCellIconSize;

@end
