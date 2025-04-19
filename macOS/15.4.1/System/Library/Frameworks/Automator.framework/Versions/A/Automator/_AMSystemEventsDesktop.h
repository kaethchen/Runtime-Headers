@class NSString;

@interface _AMSystemEventsDesktop : SBObject <_AMSystemEventsGenericMethods>

@property (readonly, copy) NSString *name;
@property double changeInterval;
@property (readonly, copy) NSString *displayName;
@property (copy) id picture;
@property long long pictureRotation;
@property (copy) id picturesFolder;
@property BOOL randomOrder;
@property BOOL translucentMenuBar;

- (void)delete;
- (void)moveTo:(id)a0;
- (long long)id;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
