@class NSString, NSPointerArray;

@interface SidecarMenuController : NSObject <NSMenuItemValidation> {
    NSString *_importTitle;
    long long _importTitleGeneration;
    NSString *_insertTitle;
    long long _insertTitleGeneration;
    NSPointerArray *_menuItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (BOOL)updateMenu:(id)a0 withEvent:(id)a1 withFlags:(unsigned long long)a2;
- (void)importFromDevice:(id)a0;
- (id)menuWithTarget:(id)a0 action:(SEL)a1 options:(unsigned long long)a2;
- (void)registerMenuItem:(id)a0 target:(id)a1 action:(SEL)a2 options:(unsigned long long)a3;
- (BOOL)updateMenu:(id)a0 withEvent:(id)a1 withFlags:(unsigned long long)a2 withResponder:(id)a3;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)_validateImportFromDeviceItem:(id)a0;
- (id)importFromDeviceTitle;
- (id)insertFromDeviceTitle;
- (id)menuWithOptions:(unsigned long long)a0;
- (id)menuWithServices:(id)a0 options:(unsigned long long)a1;
- (void)showPhotosBrowser:(id)a0;

@end
