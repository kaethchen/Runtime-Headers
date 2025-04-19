@class CombinedSidebarTabGroupToolbarButton, ToolbarDownloadsButton, BrowserToolbarItem, NSSeparatorToolbarItem, CollaborationToolbarItem;

@interface ToolbarItemProvider : NSObject

@property (retain, nonatomic) BrowserToolbarItem *backForwardItem;
@property (retain, nonatomic) BrowserToolbarItem *autoFillItem;
@property (retain, nonatomic) BrowserToolbarItem *topSitesItem;
@property (retain, nonatomic) BrowserToolbarItem *homeItem;
@property (retain, nonatomic) BrowserToolbarItem *unifiedFieldContainerItem;
@property (retain, nonatomic) BrowserToolbarItem *textSizeItem;
@property (retain, nonatomic) BrowserToolbarItem *printItem;
@property (retain, nonatomic) BrowserToolbarItem *toolbarNewTabItem;
@property (retain, nonatomic) BrowserToolbarItem *sidebarItem;
@property (retain, nonatomic) BrowserToolbarItem *historyItem;
@property (retain, nonatomic) BrowserToolbarItem *mailPageItem;
@property (retain, nonatomic) BrowserToolbarItem *showDownloadsItem;
@property (retain, nonatomic) BrowserToolbarItem *showWebInspectorItem;
@property (retain, nonatomic) BrowserToolbarItem *bookmarksBarItem;
@property (retain, nonatomic) BrowserToolbarItem *perSitePreferencesItem;
@property (retain, nonatomic) BrowserToolbarItem *reloadPageItem;
@property (retain, nonatomic) BrowserToolbarItem *webAppTitleItem;
@property (retain, nonatomic) BrowserToolbarItem *saveWebpageWithMetadataItem;
@property (retain, nonatomic) BrowserToolbarItem *cloudTabsItem;
@property (retain, nonatomic) BrowserToolbarItem *shareItem;
@property (retain, nonatomic) BrowserToolbarItem *unifiedTabBarToolbarItem;
@property (retain, nonatomic) BrowserToolbarItem *privacyReportItem;
@property (retain, nonatomic) ToolbarDownloadsButton *showDownloadsButton;
@property (retain, nonatomic) BrowserToolbarItem *combinedSidebarTabGroupItem;
@property (retain, nonatomic) NSSeparatorToolbarItem *sidebarSeparatorItem;
@property (retain, nonatomic) CombinedSidebarTabGroupToolbarButton *combinedSidebarTabGroupToolbarButton;
@property (retain, nonatomic) BrowserToolbarItem *combinedSidebarTabGroupItemForSidebarOnlyToolbar;
@property (retain, nonatomic) BrowserToolbarItem *sidebarItemForSidebarOnlyToolbar;
@property (retain, nonatomic) NSSeparatorToolbarItem *sidebarSeparatorItemForSidebarOnlyToolbar;
@property (retain, nonatomic) CombinedSidebarTabGroupToolbarButton *combinedSidebarTabGroupToolbarButtonForSidebarOnlyToolbar;
@property (retain, nonatomic) CollaborationToolbarItem *collaborationToolbarItem;
@property (retain, nonatomic) BrowserToolbarItem *lockdownModeIndicator;

- (void).cxx_destruct;

@end
