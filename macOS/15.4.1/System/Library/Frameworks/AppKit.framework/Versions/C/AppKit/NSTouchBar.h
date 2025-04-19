@class NSString, NSArray, NSSet, NSMutableDictionary, NSDictionary, NSTouchBarItem, NSTouchBarCustomizableConfiguration, CAMediaTimingFunction;
@protocol NSTouchBarDelegate;

@interface NSTouchBar : NSObject <NSAnimatablePropertyContainer, NSCoding> {
    id _configuration;
    NSString *_principalItemIdentifier;
    NSSet *_templateItems;
    id<NSTouchBarDelegate> _delegate;
    NSMutableDictionary *_itemCache;
    long long _visibilityCount;
    unsigned char _isBuildingItems : 1;
    unsigned char _suppressesLessFocusedTouchBars : 1;
    unsigned char _suppressesMoreFocusedTouchBars : 1;
    unsigned char _suppressedByLessFocusedTouchBars : 1;
    unsigned char _suppressedByMoreFocusedTouchBars : 1;
    id _fbReserved;
}

@property (class) BOOL allowsTouchesDuringTrackingLoops;
@property (class, getter=isAutomaticCustomizeTouchBarMenuItemEnabled) BOOL automaticCustomizeTouchBarMenuItemEnabled;

@property BOOL suppressesMoreFocusedBars;
@property BOOL suppressesLessFocusedBars;
@property (getter=isSuppressedByLessFocusedTouchBars) BOOL suppressedByLessFocusedTouchBars;
@property (getter=isSuppressedByMoreFocusedTouchBars) BOOL suppressedByMoreFocusedTouchBars;
@property (readonly) CAMediaTimingFunction *animationTimingFunction;
@property (readonly) double animationDuration;
@property (copy) NSDictionary *animations;
@property (retain) NSTouchBarItem *escapeKeyReplacementItem;
@property (readonly, copy) NSTouchBarCustomizableConfiguration *configuration;
@property (copy) NSString *customizationIdentifier;
@property (copy) NSArray *customizationAllowedItemIdentifiers;
@property (copy) NSArray *customizationRequiredItemIdentifiers;
@property (copy) NSArray *defaultItemIdentifiers;
@property (readonly, copy) NSArray *itemIdentifiers;
@property (copy) NSString *principalItemIdentifier;
@property (copy) NSString *escapeKeyReplacementItemIdentifier;
@property (copy) NSSet *templateItems;
@property (weak) id<NSTouchBarDelegate> delegate;
@property (readonly, getter=isVisible) BOOL visible;

+ (id)keyPathsForValuesAffectingItems;
+ (BOOL)automaticRTLMirroringSupported;
+ (BOOL)automaticallyNotifiesObserversOfSuppressedByLessFocusedTouchBars;
+ (BOOL)automaticallyNotifiesObserversOfSuppressedByMoreFocusedTouchBars;
+ (BOOL)automaticallyNotifiesObserversOfSuppressesLessFocusedBars;
+ (BOOL)automaticallyNotifiesObserversOfSuppressesMoreFocusedBars;
+ (BOOL)automaticallyNotifiesObserversOfVisible;
+ (id)defaultAnimationForKey:(id)a0;
+ (void)dismissSystemModalTouchBar:(id)a0;
+ (id)keyPathsForValuesAffectingCustomizationDefaultItemIdentifiers;
+ (id)keyPathsForValuesAffectingDefaultItems;
+ (id)keyPathsForValuesAffectingEscapeKeyReplacementItem;
+ (id)keyPathsForValuesAffectingItemIdentifiers;
+ (void)minimizeSystemModalTouchBar:(id)a0;
+ (id)pathToUserDefinedTouchBar;
+ (void)presentSystemModalTouchBar:(id)a0 placement:(long long)a1 systemTrayItemIdentifier:(id)a2;
+ (void)presentSystemModalTouchBar:(id)a0 systemTrayItemIdentifier:(id)a1;
+ (void)resetUserDefinedTouchBar;
+ (id)touchBarWithDelegate:(id)a0 customizationIdentifier:(id)a1 defaultItemIdentifiers:(id)a2 allowedItemIdentifiers:(id)a3;
+ (id)touchBarWithDelegate:(id)a0 itemIdentifiers:(id)a1;
+ (id)touchBarWithItems:(id)a0;
+ (id)userDefinedTouchBar;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)configuration;
- (Class)_animatorClass;
- (BOOL)_didItemsReallyChange:(id)a0;
- (void)_persistWithItemIdentifiers:(id)a0 toDomain:(id)a1;
- (id)_playgroundPreviewView;
- (id)_playgroundQuickLookView;
- (void)_purgeCacheIfNecessary;
- (void)_resetCustomization;
- (id)animationForKey:(id)a0;
- (id)animator;
- (id)customizationDefaultItemIdentifiers;
- (id)defaultItems;
- (id)itemForIdentifier:(id)a0;
- (id)items;
- (double)minWidthGivenVisualCenterX:(double)a0;
- (void)setCustomizationDefaultItemIdentifiers:(id)a0;
- (void)setDefaultItems:(id)a0;
- (void)setItemIdentifiers:(id)a0;
- (void)setTouchBarLayoutDirection:(long long)a0;
- (long long)touchBarLayoutDirection;

@end
