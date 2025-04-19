@class ASKChooseMenuItemEventHandler, ASKUpdateMenuItemEventHandler, NSMenuItem;

@interface ASKMenuEventTarget : NSObject {
    NSMenuItem *_menuItem;
    ASKChooseMenuItemEventHandler *_chooseHandler;
    ASKUpdateMenuItemEventHandler *_updateHandler;
}

+ (id)targetForMenuItem:(id)a0;

- (void)dealloc;
- (id)init;
- (void)setUpdateHandler:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (id)updateHandler;
- (void)action:(id)a0;
- (id)chooseHandler;
- (id)initWithMenuItem:(id)a0;
- (void)setChooseHandler:(id)a0;

@end
