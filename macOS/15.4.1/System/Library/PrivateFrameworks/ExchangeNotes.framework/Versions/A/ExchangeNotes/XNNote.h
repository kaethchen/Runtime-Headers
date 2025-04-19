@class NSString, NSArray, NSDate, XNFolder;

@interface XNNote : XNManagedObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) XNFolder *parentFolder;
@property (retain, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic) NSDate *dateModified;
@property (retain, nonatomic) NSString *changeKey;
@property (retain, nonatomic) NSArray *attachments;

+ (id)createNoteWithExternalIdentifier:(id)a0 title:(id)a1 content:(id)a2 dateCreated:(id)a3 dateModified:(id)a4 changeKey:(id)a5 parentFolder:(id)a6 attachments:(id)a7;
+ (id)createNoteWithExternalIdentifier:(id)a0 title:(id)a1 content:(id)a2 dateCreated:(id)a3 dateModified:(id)a4 changeKey:(id)a5 parentFolder:(id)a6 attachments:(id)a7 error:(id *)a8;
+ (id)noteWithExternalIdentifier:(id)a0;
+ (id)noteWithInternalIdentifier:(id)a0;

@end
