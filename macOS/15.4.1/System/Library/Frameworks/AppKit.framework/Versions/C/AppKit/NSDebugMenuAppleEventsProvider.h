@class NSString, NSMenuItem;

@interface NSDebugMenuAppleEventsProvider : NSObject <NSDebugMenuItemProvider>

@property (readonly, copy) NSMenuItem *menuItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)quitApplicationEventDescriptorWithReason:(unsigned int)a0 preserveState:(id)a1;

- (void)aeQuit:(id)a0;
- (id)appleEventsMenu;
- (BOOL)worksWhenModal;

@end
