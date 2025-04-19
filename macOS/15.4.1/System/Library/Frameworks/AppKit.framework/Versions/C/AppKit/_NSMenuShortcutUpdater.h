@class NSMutableSet;

@interface _NSMenuShortcutUpdater : NSObject {
    NSMutableSet *_menus;
}

+ (id)updater;

- (id)init;
- (BOOL)isScheduled:(id)a0;
- (void)schedule:(id)a0;
- (void)unschedule:(id)a0;

@end
