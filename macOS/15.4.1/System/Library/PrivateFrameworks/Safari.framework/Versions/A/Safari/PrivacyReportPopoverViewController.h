@class NSTextField, NSOutlineView, NSScrollView, NSView, BrowserViewController, NSString, NSArray, BackgroundColorView, NSLayoutConstraint, NSImageView, NSButton, NSBox;

@interface PrivacyReportPopoverViewController : NSViewController <NSPopoverDelegate, NSOutlineViewDelegate, NSOutlineViewDataSource> {
    NSArray *_knownTrackingDomains;
    long long _numberOfBlockedTrackingDomains;
    NSArray *_knownTrackingDomainsOutlineItems;
}

@property (weak, nonatomic) NSImageView *shieldOrWarningImage;
@property (weak, nonatomic) NSTextField *bodyText;
@property (weak, nonatomic) NSTextField *firstPartyDomainLabel;
@property (weak, nonatomic) NSTextField *numberOfTrackersLabel;
@property (weak, nonatomic) NSButton *fullReportInfoButton;
@property (weak, nonatomic) NSBox *knownTrackingDomainsSeparator;
@property (weak, nonatomic) NSScrollView *knownTrackingDomainsScrollView;
@property (weak, nonatomic) NSOutlineView *knownTrackingDomainsOutlineView;
@property (weak, nonatomic) NSLayoutConstraint *knownTrackingDomainsScrollViewHeightConstraint;
@property (weak, nonatomic) NSView *trackingStatisticsView;
@property (weak, nonatomic) NSView *crossSiteTrackingPreventionDisabledViewContainer;
@property (weak, nonatomic) NSTextField *crossSiteTrackingPreventionTitle;
@property (weak, nonatomic) NSTextField *crossSiteTrackingPreventionDetailText;
@property (weak, nonatomic) BackgroundColorView *crossSiteTrackingPreventionDisabledTile;
@property (weak, nonatomic) NSButton *enableCrossSiteTrackingPreventionButton;
@property (weak, nonatomic) BrowserViewController *webViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)nibName;
- (void)awakeFromNib;
- (id)nibBundle;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 rowViewForItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)outlineViewItemWillCollapse:(id)a0;
- (void)outlineViewItemWillExpand:(id)a0;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (id)_filteredQueryParameterBodyText;
- (id)_blockedTrackerBodyText;
- (BOOL)_isPrivacyProxyDisabled;
- (BOOL)_isPrivacyProxyRestrictedToOnlyTrackers;
- (BOOL)_isTrackingPreventionDisabled;
- (void)_loadDataAndPopulatePopover;
- (void)_populatePopover;
- (id)_preventedTrackerBodyText;
- (void)_setKnownTrackingDomainsViewHidden:(BOOL)a0;
- (id)_trackerBodyText;
- (void)_turnOnCrossSiteTrackingPrevention;
- (void)_turnOnPrivacyProxyWithCompletionHandler:(id /* block */)a0;
- (void)_updateCrossSiteTrackingPreventionDisabledLabels;
- (void)_updateCrossSiteTrackingPreventionDisabledView;
- (void)_updateCrossSiteTrackingPreventionPopoverElements;
- (void)enableCrossSiteTrackingPrevention:(id)a0;
- (void)showFullPrivacyReport:(id)a0;
- (void)toggleKnownTrackingDomainsExpanded:(id)a0;

@end
