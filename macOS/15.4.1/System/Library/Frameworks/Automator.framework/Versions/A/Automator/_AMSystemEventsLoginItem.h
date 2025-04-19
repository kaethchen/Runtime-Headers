@class NSString;

@interface _AMSystemEventsLoginItem : SBObject <_AMSystemEventsGenericMethods>

@property BOOL hidden;
@property (readonly, copy) NSString *kind;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *path;

- (void)delete;
- (void)moveTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
