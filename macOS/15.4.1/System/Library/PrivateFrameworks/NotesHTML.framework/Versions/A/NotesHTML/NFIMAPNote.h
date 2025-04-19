@class NSUUID, NFIMAPFolder, NSString, NSDate, NSNumber, NSSet;

@interface NFIMAPNote : NFNote <ICNFIMAPPersistedMessage__CD>

@property (retain, nonatomic) NSUUID *primitiveUniversallyUniqueID;
@property (retain, nonatomic) NFIMAPFolder *folder;
@property (nonatomic) long long mimeDataSize;
@property (retain, nonatomic) NSUUID *universallyUniqueID;
@property (retain, nonatomic) NFIMAPFolder *mailbox;
@property (retain, nonatomic) NSNumber *imapUID;
@property (retain, nonatomic) NSDate *dateEdited;
@property (retain, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic) NSDate *dateSent;
@property (retain, nonatomic) NSDate *dateReceived;
@property (copy, nonatomic) NSString *from;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSSet *references;
@property (nonatomic) BOOL unread;
@property (copy, nonatomic) NSString *bodyHTML;
@property (copy, nonatomic) NSSet *attachments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)noteTypeForActivity;
+ (id)notesWithUniqueID:(id)a0 context:(id)a1;

- (id)identifier;
- (BOOL)isRemote;
- (void)awakeFromInsert;
- (id)activityDictionary;
- (BOOL)validateFolder:(inout id *)a0 error:(out id *)a1;

@end
