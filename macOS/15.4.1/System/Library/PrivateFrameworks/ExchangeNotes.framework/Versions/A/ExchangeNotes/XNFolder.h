@class NSString;

@interface XNFolder : XNManagedObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSString *changeKey;
@property (retain, nonatomic) XNFolder *parent;

+ (id)createFolderWithExternalIdentifier:(id)a0 name:(id)a1 parentObject:(id)a2 changeKey:(id)a3 error:(id *)a4;
+ (id)folderWithExternalIdentifier:(id)a0;
+ (id)folderWithInternalIdentifier:(id)a0;

- (id)createNoteWithExternalIdentifier:(id)a0 title:(id)a1 content:(id)a2 dateCreated:(id)a3 dateModified:(id)a4 changeKey:(id)a5 folder:(id)a6 attachments:(id)a7;
- (id)createNoteWithExternalIdentifier:(id)a0 title:(id)a1 content:(id)a2 dateCreated:(id)a3 dateModified:(id)a4 changeKey:(id)a5 folder:(id)a6 attachments:(id)a7 error:(id *)a8;
- (id)createSubfolderWithExternalIdentifier:(id)a0 name:(id)a1;
- (id)createSubfolderWithExternalIdentifier:(id)a0 name:(id)a1 changeKey:(id)a2;
- (id)createSubfolderWithExternalIdentifier:(id)a0 name:(id)a1 changeKey:(id)a2 error:(id *)a3;
- (id)createSubfolderWithExternalIdentifier:(id)a0 name:(id)a1 error:(id *)a2;

@end
