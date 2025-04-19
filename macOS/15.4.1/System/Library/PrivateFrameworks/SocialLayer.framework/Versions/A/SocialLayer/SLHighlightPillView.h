@class NSMenuItem, NSString, NSArray, SLViewAllowingVibrancy, NSVisualEffectView, SLHighlight, NSSet, NSColor, SLDisambiguationMenu, NSImageView;
@protocol SLHighlightPillViewDelegate;

@interface SLHighlightPillView : SLRemoteView <SLHighlightPillViewCrossPlatform>

@property (retain, nonatomic) SLHighlight *highlight;
@property (retain, nonatomic) NSVisualEffectView *blurView;
@property (retain, nonatomic) SLViewAllowingVibrancy *opaqueBackgroundView;
@property (retain, nonatomic) NSImageView *chevronImageView;
@property (retain, nonatomic) NSArray *attributionIdentifiers;
@property (nonatomic) unsigned long long variant;
@property (retain, nonatomic) NSSet *excludedContextMenuIdentifiers;
@property (retain, nonatomic) NSMenuItem *replyMenuItem;
@property (retain, nonatomic) NSMenuItem *hideMenuItem;
@property (retain, nonatomic) SLDisambiguationMenu *disambiguationMenu;
@property (retain, nonatomic) NSArray *contextMenuItems;
@property (retain, nonatomic) NSArray *chevronConstraints;
@property (weak, nonatomic) id<SLHighlightPillViewDelegate> delegate;
@property (nonatomic) BOOL shouldDrawBackgroundBlur;
@property (retain, nonatomic) NSString *blurEffectGroupName;
@property (retain, nonatomic) NSColor *preferredBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (double)_displayScale;
- (BOOL)clipsToBounds;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)excludeContextMenuItemsWithIdentifiers:(id)a0;
- (void)pillClicked;
- (BOOL)shouldShowContextMenu;
- (id)_attributionIdentifiers;
- (void)_configureChevronImageAndConstraintsForLastSlotStyle;
- (void)_hideMenuItemSelected;
- (id)_nsMenuItems;
- (void)_replyMenuItemSelected;
- (void)_setupBackgroundViews;
- (double)expectedHeightForMaxWidth:(double)a0;
- (id)getContextMenu;
- (id)initWithHighlight:(id)a0 maxWidth:(double)a1 variant:(unsigned long long)a2 shouldDrawBlur:(BOOL)a3;
- (id)makePlaceholderSlotContentForStyle:(id)a0;
- (void)refreshContextMenuItems;
- (void)remoteContentIsLoadedValueChanged;
- (void)renderRemoteContentForLayerContextID:(unsigned long long)a0 style:(id)a1 yield:(id /* block */)a2;
- (BOOL)shouldInvalidatePreviousPlaceHolderSlotContent:(id)a0 forStyle:(id)a1;
- (BOOL)shouldShowReplyContextMenu;

@end
