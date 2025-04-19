@interface _AMSystemEventsDockPreferencesObject : SBObject <_AMSystemEventsGenericMethods>

@property BOOL animate;
@property BOOL autohide;
@property double dockSize;
@property BOOL magnification;
@property double magnificationSize;
@property int minimizeEffect;
@property int screenEdge;

- (void)delete;
- (void)moveTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
