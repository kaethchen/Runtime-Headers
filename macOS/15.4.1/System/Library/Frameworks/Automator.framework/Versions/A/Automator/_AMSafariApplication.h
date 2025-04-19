@class NSString;

@interface _AMSafariApplication : SBApplication

@property (readonly) BOOL frontmost;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *version;

+ (id)application;

- (id)windows;
- (id)documents;
- (id)open:(id)a0;
- (void)showBookmarks;
- (id)doJavaScript:(id)a0 in:(id)a1;
- (id)classNamesForCodes;
- (id)codesForPropertyNames;
- (void)emailContentsOf:(id)a0;
- (void)print:(id)a0 printDialog:(BOOL)a1 withProperties:(id)a2;
- (void)quitSaving:(int)a0;

@end
