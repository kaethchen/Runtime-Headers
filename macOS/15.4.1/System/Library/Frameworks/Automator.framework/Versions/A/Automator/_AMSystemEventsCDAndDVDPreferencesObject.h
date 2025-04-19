@class _AMSystemEventsInsertionPreference;

@interface _AMSystemEventsCDAndDVDPreferencesObject : SBObject <_AMSystemEventsGenericMethods>

@property (readonly, copy) _AMSystemEventsInsertionPreference *blankCD;
@property (readonly, copy) _AMSystemEventsInsertionPreference *blankDVD;
@property (readonly, copy) _AMSystemEventsInsertionPreference *blankBD;
@property (readonly, copy) _AMSystemEventsInsertionPreference *musicCD;
@property (readonly, copy) _AMSystemEventsInsertionPreference *pictureCD;
@property (readonly, copy) _AMSystemEventsInsertionPreference *videoDVD;
@property (readonly, copy) _AMSystemEventsInsertionPreference *videoBD;

- (void)delete;
- (void)moveTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
