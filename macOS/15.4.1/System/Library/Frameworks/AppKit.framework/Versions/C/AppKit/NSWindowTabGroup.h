@class NSString, NSArray, NSWindow;

@interface NSWindowTabGroup : NSObject

@property (copy) NSString *identifier;
@property (getter=isTabBarEnabled) BOOL tabBarEnabled;
@property BOOL shouldShowTabBarWithOneItem;
@property (readonly, copy) NSArray *windows;
@property (getter=isOverviewVisible) BOOL overviewVisible;
@property (readonly, getter=isTabBarVisible) BOOL tabBarVisible;
@property (weak) NSWindow *selectedWindow;

- (id)init;
- (void).cxx_destruct;
- (id)plusTab;
- (void)addWindow:(id)a0;
- (id)initWithTabbingIdentifier:(id)a0;
- (void)insertWindow:(id)a0 atIndex:(long long)a1;
- (void)removeWindow:(id)a0;
- (void)setTabBarEnabled:(BOOL)a0;

@end
