@class NFEWSFolder, NSString;

@interface NFEWSNote : NFNote

@property (retain, nonatomic) NFEWSFolder *folder;
@property (copy, nonatomic) NSString *changeKey;

+ (BOOL)supportsAttachments;
+ (id)notesWithItemIdStrings:(id)a0 context:(id)a1;
+ (id)createNoteWithItemIdString:(id)a0 context:(id)a1;
+ (id)noteWithTitle:(id)a0 hash:(id)a1 context:(id)a2;

- (id)identifier;
- (BOOL)isRemote;
- (id)createAttachmentWithName:(id)a0;
- (id)_calculateHashForNoteBody;
- (id)_sha1Hash:(id)a0;
- (id)_simplifiedStringFromString:(id)a0 isXML:(BOOL)a1;
- (id)activityDictionary;
- (BOOL)bodyMatchesHash:(id)a0;
- (BOOL)validateFolder:(inout id *)a0 error:(out id *)a1;

@end
