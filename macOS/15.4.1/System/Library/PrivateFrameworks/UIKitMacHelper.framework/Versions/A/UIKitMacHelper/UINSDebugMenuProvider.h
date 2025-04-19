@class NSString, NSMenu, NSMenuItem;

@interface UINSDebugMenuProvider : NSObject <NSMenuDelegate, NSMenuItemValidation> {
    NSMenu *_catalystMenu;
    NSMenuItem *_toggleRemoteVCOverlayItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerProvider;

- (void).cxx_destruct;
- (id)menuItem;
- (void)menuWillOpen:(id)a0;
- (id)_catalystMenu;
- (id)_toggleRemoteVCOverlayItem;

@end
