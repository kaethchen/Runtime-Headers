@interface _TearOffTabWindow : NSTearOffTabWindow

@property (nonatomic) BOOL canDetachTab;

- (BOOL)_wantsFullScreenTileDropTargets;
- (BOOL)_allowedInOtherAppsFullScreenSpaceWithCollectionBehavior:(unsigned long long)a0;
- (void)_setWindowTag;

@end
