@class NSColor, NSAppearance;

@interface NSButtonBezelConfiguration : NSObject

@property (retain, nonatomic) NSAppearance *appearance;
@property (retain, nonatomic) NSColor *bezelTintColor;
@property (nonatomic) long long interactionState;
@property (nonatomic) long long presentationState;
@property (nonatomic) long long buttonStyle;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long controlSize;
@property (nonatomic) long long focusLocation;
@property (nonatomic) double backingScaleFactor;
@property (nonatomic) BOOL usesTextAppearanceInToolbar;
@property (nonatomic) BOOL prefersDefaultButtonAppearance;
@property (nonatomic) BOOL drawWithLegacyFocus;
@property (nonatomic) BOOL showsDisclosureChevron;
@property (nonatomic) BOOL backgroundChangesWithState;
@property (nonatomic) BOOL shouldDrawBezel;
@property (nonatomic) BOOL hasExplicitMaterial;
@property (nonatomic) BOOL isCheckboxOrRadio;
@property (nonatomic) BOOL hasAlternateContent;
@property (nonatomic) BOOL prefersAlternateContent;
@property (nonatomic) BOOL inToolbar;
@property (readonly) BOOL isBordered;
@property (readonly) BOOL shouldDrawAsDefaultButton;
@property (readonly) BOOL inTouchBar;

- (void).cxx_destruct;

@end
