@class NSString;

@interface _AMTextEditApplication : SBApplication

@property (readonly) BOOL frontmost;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *version;

- (id)windows;
- (id)documents;
- (id)open:(id)a0;
- (id)classNamesForCodes;
- (id)codesForPropertyNames;
- (void)print:(id)a0 printDialog:(BOOL)a1 withProperties:(id)a2;
- (void)quitSaving:(int)a0;

@end
