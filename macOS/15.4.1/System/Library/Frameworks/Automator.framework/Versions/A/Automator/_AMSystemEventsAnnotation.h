@class NSString;

@interface _AMSystemEventsAnnotation : SBObject <_AMSystemEventsGenericMethods>

@property (readonly, copy) NSString *fullText;
@property (readonly, copy) NSString *name;

- (void)delete;
- (void)moveTo:(id)a0;
- (id)id;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
