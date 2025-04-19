@class NSString, NSMenuItem;

@interface NSDebugMenuSystemInfoProvider : NSObject <NSDebugMenuItemProvider>

@property (readonly, copy) NSMenuItem *menuItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
