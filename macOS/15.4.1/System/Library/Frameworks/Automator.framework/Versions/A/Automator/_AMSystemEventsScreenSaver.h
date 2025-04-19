@class NSString, _AMSystemEventsAlias;

@interface _AMSystemEventsScreenSaver : SBObject <_AMSystemEventsGenericMethods>

@property (readonly, copy) NSString *displayedName;
@property (readonly, copy) NSString *name;
@property (readonly, copy) _AMSystemEventsAlias *path;
@property (copy) NSString *pictureDisplayStyle;

- (void)start;
- (void)stop;
- (void)delete;
- (void)moveTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
