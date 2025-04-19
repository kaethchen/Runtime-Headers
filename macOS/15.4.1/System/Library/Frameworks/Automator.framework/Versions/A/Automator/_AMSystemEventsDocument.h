@class NSString, _AMSystemEventsFile;

@interface _AMSystemEventsDocument : SBObject <_AMSystemEventsGenericMethods>

@property (readonly, copy) NSString *name;
@property (readonly) BOOL modified;
@property (readonly, copy) _AMSystemEventsFile *file;

- (void)delete;
- (void)moveTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
