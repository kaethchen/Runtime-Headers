@class _AMAddressBookPerson, NSArray, NSString;

@interface _AMAddressBookApplication : SBApplication

@property (copy) _AMAddressBookPerson *myCard;
@property (readonly) BOOL unsaved;
@property (copy) NSArray *selection;
@property (readonly, copy) NSString *defaultCountryCode;
@property (readonly, copy) NSString *name;
@property (readonly) BOOL frontmost;
@property (readonly, copy) NSString *version;

- (id)groups;
- (id)windows;
- (id)documents;
- (id)open:(id)a0;
- (id)save;
- (id)people;
- (BOOL)exists:(id)a0;
- (id)actionProperty;
- (id)classNamesForCodes;
- (id)codesForPropertyNames;
- (id)actionTitleWith:(id)a0 for:(id)a1;
- (BOOL)performActionWith:(id)a0 for:(id)a1;
- (void)print:(id)a0 withProperties:(id)a1 printDialog:(BOOL)a2;
- (void)quitSaving:(int)a0;
- (BOOL)shouldEnableActionWith:(id)a0 for:(id)a1;

@end
