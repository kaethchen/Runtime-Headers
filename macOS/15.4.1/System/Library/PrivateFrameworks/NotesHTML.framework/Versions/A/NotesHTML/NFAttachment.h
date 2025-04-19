@class NSString, NFNote, NSURL, NSImage;

@interface NFAttachment : NSManagedObject

@property (retain, nonatomic) NSString *primitiveContentID;
@property (copy, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NFNote *note;
@property (readonly, weak) NSURL *cidURL;
@property (readonly, weak) NSString *filename;
@property (readonly, weak) NSString *mimeType;
@property (readonly, weak) NSImage *icon;

+ (id)keyPathsForValuesAffectingIcon;
+ (id)attachmentWithContentID:(id)a0 inNote:(id)a1 context:(id)a2;
+ (id)keyPathsForValuesAffectingCidURL;
+ (id)keyPathsForValuesAffectingFilename;

- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (id)compactDescription;
- (id)initWithFilename:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (BOOL)validateFileURL:(inout id *)a0 error:(out id *)a1;

@end
