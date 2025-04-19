@interface _AMiPhoto5Application : SBApplication

+ (id)application;

- (id)name;
- (id)version;
- (int)view;
- (id)keywords;
- (void)setView:(int)a0;
- (id)windows;
- (id)documents;
- (void)open:(id)a0;
- (id)selection;
- (id)photos;
- (void)setSelection:(id)a0;
- (id)albums;
- (id)classNamesForCodes;
- (id)codesForPropertyNames;
- (id)lastMonthsAlbum;
- (void)setMailAddress:(id)a0;
- (id)lastImportAlbum;
- (void)setMailSubject:(id)a0;
- (id)currentAlbum;
- (BOOL)frontmost;
- (id)lastRollsAlbum;
- (id)mailAddress;
- (id)mailRecipient;
- (id)mailSubject;
- (id)photoLibraryAlbum;
- (void)print:(id)a0 printDialog:(BOOL)a1 withProperties:(id)a2;
- (void)setCurrentAlbum:(id)a0;
- (void)setMailRecipient:(id)a0;
- (id)trashAlbum;

@end
