@class NSArray, NSString, NSMenuItem;

@interface NSDebugMenuNonStandardBehaviorProvider : NSObject <NSMenuDelegate, NSDebugMenuItemProvider>

@property (copy) NSArray *cachedEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSMenuItem *menuItem;

- (void)dealloc;
- (id)init;
- (void)copyArgument:(id)a0;
- (void)copyName:(id)a0;
- (void)entriesDidChange:(id)a0;
- (void)menuNeedsUpdate:(id)a0;

@end
