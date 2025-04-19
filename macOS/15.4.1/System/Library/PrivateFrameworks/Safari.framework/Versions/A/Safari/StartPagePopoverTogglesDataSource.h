@class NSString;

@interface StartPagePopoverTogglesDataSource : NSObject

@property (class, readonly, nonatomic) long long numberOfTabGroupRows;
@property (class, readonly, nonatomic) long long numberOfSuggestionsRows;
@property (class, readonly, nonatomic) long long numberOfBackgroundImageRows;
@property (class, readonly, nonatomic) long long numberOfRows;

@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *accessibilityLabel;
@property (readonly, copy, nonatomic) NSString *onStateAccessibilityLabel;
@property (readonly, copy, nonatomic) NSString *offStateAccessibilityLabel;
@property (readonly, nonatomic) BOOL isSeparator;
@property (readonly, nonatomic) BOOL isTitle;

+ (id)_getRecentlyClosedTabsDataSource;
+ (BOOL)_hasSyncedCloudTabDevicesForProfileWithIdentifierString:(id)a0;
+ (id)backgroundImageDataWithRowIndex:(long long)a0;
+ (id)dataWithRowIndex:(long long)a0 forProfileWithIdentifier:(id)a1;
+ (BOOL)hasAnySectionEnabledForProfileWithIdentifier:(id)a0;
+ (id)orderOfStartPageSections:(id)a0;
+ (id)startPagePopoverTogglesDataSourceWithLabel:(id)a0 sectionIdentifier:(id)a1 imageName:(id)a2 accessibilityLabel:(id)a3;
+ (id)startPagePopoverTogglesDataSourceWithLabel:(id)a0 sectionIdentifier:(id)a1 imageName:(id)a2 accessibilityLabel:(id)a3 onStateAccessibilityLabel:(id)a4 offStateAccessibilityLabel:(id)a5;
+ (id)suggestionsDataWithRowIndex:(long long)a0;
+ (id)tabGroupDataWithRowIndex:(long long)a0;

- (void).cxx_destruct;
- (id)initSeparatorDataSource;
- (id)initTitleDataSourceWithTitle:(id)a0;
- (id)initWithLabel:(id)a0 sectionIdentifier:(id)a1 imageName:(id)a2 accessibilityLabel:(id)a3;
- (id)initWithLabel:(id)a0 sectionIdentifier:(id)a1 imageName:(id)a2 accessibilityLabel:(id)a3 onStateAccessibilityLabel:(id)a4 offStateAccessibilityLabel:(id)a5;

@end
