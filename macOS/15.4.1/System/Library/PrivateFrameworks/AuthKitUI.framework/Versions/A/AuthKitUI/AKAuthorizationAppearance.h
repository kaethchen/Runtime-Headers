@class NSColor, NSFont;

@interface AKAuthorizationAppearance : NSObject

@property (class, readonly, nonatomic) NSFont *titleFont;
@property (class, readonly, nonatomic) NSFont *subtitleFont;
@property (class, readonly, nonatomic) NSFont *smallTitleFont;
@property (class, readonly, nonatomic) NSColor *smallTitleTextColor;
@property (class, readonly, nonatomic) NSFont *captionFont;
@property (class, readonly, nonatomic) NSColor *captionTextColor;
@property (class, readonly, nonatomic) NSFont *messageFont;
@property (class, readonly, nonatomic) NSFont *bulletInfoLabelTitleFont;
@property (class, readonly, nonatomic) NSFont *bulletInfoLabelDescriptionFont;
@property (class, readonly, nonatomic) NSColor *scopeRowBackgroundColor;
@property (class, readonly, nonatomic) NSFont *scopeTitleFont;
@property (class, readonly, nonatomic) NSColor *scopeTitleTextColor;
@property (class, readonly, nonatomic) NSColor *linkColor;
@property (class, readonly, nonatomic) NSFont *scopeInfoLabelFont;
@property (class, readonly, nonatomic) NSColor *scopeInfoLabelTextColor;
@property (class, readonly, nonatomic) BOOL shouldShowBlurBackground;
@property (class, readonly, nonatomic) NSColor *checkmarkDeselectedTintColor;
@property (class, readonly, nonatomic) NSColor *sharedAccountIconBackgroundColor;

+ (id)clearButtonColor;

@end
