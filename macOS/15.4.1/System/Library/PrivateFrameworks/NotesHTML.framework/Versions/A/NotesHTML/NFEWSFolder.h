@class NSString;

@interface NFEWSFolder : NFFolder

@property (retain, nonatomic) NFEWSFolder *parent;
@property (copy, nonatomic) NSString *changeKey;
@property (copy, nonatomic) NSString *folderId;
@property (nonatomic) BOOL isDistinguished;
@property (copy, nonatomic) NSString *syncState;
@property (nonatomic) BOOL isUnknownType;

+ (id)createFolderWithFolderId:(id)a0 context:(id)a1;
+ (id)folderWithFolderId:(id)a0 context:(id)a1;
+ (Class)noteClass;

- (BOOL)isRemote;
- (BOOL)validateValue:(inout id *)a0 forKey:(id)a1 error:(out id *)a2;
- (id)newNote;
- (id)createNote;
- (id)newSubfolderWithName:(id)a0;
- (id)subfolderWithName:(id)a0;
- (void)trimFolderTreeWithParent:(id)a0;
- (BOOL)validateAccount:(inout id *)a0 error:(out id *)a1;

@end
