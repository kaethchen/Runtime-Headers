@class NSString, NSSet, NSArray, NFAccount;

@interface NFFolder : NSManagedObject

@property (retain, nonatomic) NFAccount *primitiveAccount;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NFAccount *account;
@property (copy, nonatomic) NSSet *folders;
@property (copy, nonatomic) NSSet *notes;
@property (retain, nonatomic) NFFolder *parent;
@property (readonly, copy, nonatomic) NSArray *ancestors;
@property (readonly) BOOL isRemote;

+ (Class)noteClass;

- (long long)depth;
- (BOOL)validateName:(inout id *)a0 error:(out id *)a1;
- (id)account;
- (id)compactDescription;
- (id)newNote;
- (BOOL)isDeletedOrInTrash;
- (void)moveToTrash;
- (void)addNotesForChildFoldersToArray:(id)a0;
- (BOOL)_isSiblingWithSameNameAllowed:(id)a0;
- (BOOL)_siblingIsAllowedWithName:(id)a0 parent:(id)a1;
- (BOOL)containsNoteWithAttachment;
- (id)defaultNameForNewSubfolderWithName:(id)a0;
- (id)newSubfolderWithName:(id)a0;
- (id)notesIncludingChildFolders;
- (id)subfolderWithName:(id)a0;
- (void)takeValuesFromFolder:(id)a0;
- (BOOL)validateParent:(inout id *)a0 error:(out id *)a1;

@end
