@class NSFont, NSString, NSAttributedString, NSArray, EKEvent, NSColor, NSImage, NSNumber, NSCache;

@interface CUIKOROccurrenceState : NSObject <CUIKMutableDayOccurrenceState, CUIKOROccurrenceState> {
    BOOL _isPerformingChanges;
    BOOL _didChange;
}

@property (class, readonly, nonatomic) NSCache *locationCache;
@property (class, readonly, nonatomic) NSCache *languageAwareInsetsCache;
@property (class, readonly, nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } defaultPadding;

@property (nonatomic) BOOL occurrenceIsFirstVisibleDayOfEvent;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isDimmed;
@property (nonatomic) BOOL usesSmallText;
@property (nonatomic) double travelTime;
@property (retain, nonatomic) NSColor *displayColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } backgroundRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } estimatedTextFrame;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) double travelTimeHeight;
@property (nonatomic) double visibleHeight;
@property (nonatomic) long long birthdayCount;
@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic) long long horizontalSizeClass;
@property (retain, nonatomic) NSNumber *allDayOverride;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isTentative;
@property (readonly, nonatomic) BOOL needsReply;
@property (readonly, nonatomic) BOOL isAllDay;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) BOOL isDeclined;
@property (readonly, nonatomic) BOOL hasNewTimeProposed;
@property (readonly, nonatomic) BOOL isBirthday;
@property (readonly, nonatomic) BOOL isReminder;
@property (readonly, nonatomic) int reminderStackDepth;
@property (readonly, nonatomic) BOOL isCompleted;
@property (readonly, nonatomic) BOOL drawReminderAsEditable;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hidesTime;
@property (readonly, nonatomic) NSAttributedString *location;
@property (readonly, nonatomic) NSString *moreText;
@property (readonly, nonatomic) NSColor *titleTextColor;
@property (readonly, nonatomic) NSColor *timeTextColor;
@property (readonly, nonatomic) NSColor *locationTextColor;
@property (readonly, nonatomic) NSColor *moreTextColor;
@property (readonly, nonatomic) NSColor *strikethroughColor;
@property (readonly, nonatomic) NSColor *baseColor;
@property (readonly, nonatomic) NSColor *colorBarColor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } textSpace;
@property (readonly, nonatomic) double minimumNaturalHeightAllText;
@property (readonly, nonatomic) double enoughHeightForOneLine;
@property (readonly, nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } languageAwareInsets;
@property (readonly, nonatomic) BOOL requiresLanguageAwarePadding;
@property (readonly, nonatomic) double totalLanguageAwareHeightPadding;
@property (readonly, nonatomic) NSImage *leadingIcon;
@property (readonly, nonatomic) NSArray *trailingIcons;
@property (readonly, nonatomic) NSFont *primaryTextFont;
@property (readonly, nonatomic) NSFont *secondaryTextFont;
@property (readonly, nonatomic) unsigned long long fontCompressionDegree;
@property (readonly, nonatomic) NSString *locationImageName;
@property (retain, nonatomic) EKEvent *occurrence;
@property (retain, nonatomic) NSArray *occurrences;
@property (nonatomic) BOOL isProposedTime;
@property (nonatomic) BOOL isMiniPreviewInEventDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearLocationCache;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })defaultMarginFromEKDayOccurrenceView;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })defaultPaddingFromEKDayOccurrenceView;
+ (double)enoughHeightForOneLineForEvent:(id)a0 usingSmallText:(BOOL)a1 sizeClass:(long long)a2;
+ (id)tallCharacterSetCache;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)status;
- (void)performChanges:(id /* block */)a0;
- (BOOL)isReminderStack;
- (id)_leadingSymbolSizeConfigurationForReminder:(BOOL)a0;
- (void)_location:(id *)a0 locationImageName:(id *)a1;
- (void)performChangesWithState:(id)a0;
- (id)primaryTextFontBold:(BOOL)a0;
- (id)primaryTextFontNonBold;
- (id)reminderIcon;
- (id)secondaryTitleTextColor;
- (id)trailingIconsColor;

@end
