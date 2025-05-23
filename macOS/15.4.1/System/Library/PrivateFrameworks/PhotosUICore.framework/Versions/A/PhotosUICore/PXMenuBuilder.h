@class NSMutableArray;

@interface PXMenuBuilder : NSObject

@property (readonly, nonatomic) NSMutableArray *menuItems;

+ (id)_menuWithConfiguration:(id /* block */)a0;
+ (id)defaultStoryActionsMenuWithViewModel:(id)a0;
+ (id)defaultStoryThumbnailActionsMenuWithModel:(id)a0 isFavorite:(BOOL)a1;
+ (id)menuWithDeferredConfiguration:(id /* block */)a0;
+ (id)menuWithTitle:(id)a0 deferredConfiguration:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_addMenuItem:(id)a0;
- (void)addActionsMenuDurationSectionWithStoryViewModel:(id)a0;
- (void)addItemWithTitle:(id)a0 systemImageName:(id)a1 handler:(id /* block */)a2;
- (void)addItemWithTitle:(id)a0 systemImageName:(id)a1 options:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)addItemWithTitle:(id)a0 systemImageName:(id)a1 state:(long long)a2 options:(unsigned long long)a3 handler:(id /* block */)a4;
- (void)addItemWithTitle:(id)a0 systemImageName:(id)a1 submenuConfiguration:(id /* block */)a2;
- (void)addSectionWithConfiguration:(id /* block */)a0;

@end
