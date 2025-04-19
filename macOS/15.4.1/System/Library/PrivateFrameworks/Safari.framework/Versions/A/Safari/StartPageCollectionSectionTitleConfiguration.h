@class NSString;

@interface StartPageCollectionSectionTitleConfiguration : NSObject <StartPageCollectionSectionTitleMutableConfiguration, NSCopying>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *accessibilityLabel;
@property (readonly, copy, nonatomic) id /* block */ popUpAction;
@property (readonly, copy, nonatomic) id /* block */ trailingAccessoryViewProvider;
@property (readonly, copy, nonatomic) id /* block */ secondaryTrailingAccessoryViewProvider;
@property (readonly, nonatomic) BOOL canGoBack;
@property (readonly, nonatomic) BOOL usesCustomShowMore;
@property (readonly, nonatomic) BOOL canCollapseSection;
@property (readonly, nonatomic) BOOL isSectionCollapsed;
@property (readonly, nonatomic) BOOL showsProfileIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationWithValues:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)_copy;
- (void)setAccessibilityLabel:(id)a0;
- (id)configurationByModifyingValues:(id /* block */)a0;
- (void)setPopUpAction:(id /* block */)a0;
- (id)makeSecondaryTrailingAccessoryView;
- (id)makeTrailingAccessoryView;
- (void)setCanCollapseSection:(BOOL)a0;
- (void)setCanGoBack:(BOOL)a0;
- (void)setIsSectionCollapsed:(BOOL)a0;
- (void)setSecondaryTrailingAccessoryViewProvider:(id /* block */)a0;
- (void)setShowsProfileIcon:(BOOL)a0;
- (void)setTrailingAccessoryViewProvider:(id /* block */)a0;
- (void)setUsesCustomShowMore:(BOOL)a0;

@end
