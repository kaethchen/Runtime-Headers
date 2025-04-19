@class NSString, NSMenuItem;

@interface NSDebugMenuTextStylesProvider : NSObject <NSDebugMenuItemProvider> {
    NSMenuItem *_menuItem;
}

@property (readonly, copy) NSMenuItem *menuItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
