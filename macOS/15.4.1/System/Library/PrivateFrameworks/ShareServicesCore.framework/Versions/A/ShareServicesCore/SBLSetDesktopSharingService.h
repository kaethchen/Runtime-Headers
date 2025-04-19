@interface SBLSetDesktopSharingService : NSSharingService

+ (id)_pathForDesktopImage:(long long)a0;
+ (void)_setDesktopForItemProvider:(id)a0;
+ (void)_setDesktopPictureURL:(id)a0 forDisplay:(long long)a1 options:(id)a2;

- (BOOL)canPerformWithItems:(id)a0;
- (void)performWithItems:(id)a0;
- (id)initWithItemProvider:(id)a0;

@end
