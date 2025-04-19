@class NSDate, NSString, NSArray, NSUUID, NSSet, ECSubject, NSDictionary, ECMessageFlags, EDMessageCategorizationResult, ECAngleBracketIDHash;
@protocol ECMimeBody, ECMessageHeaders, EDIndexableMailbox, EDIndexableAccount;

@interface MCRemoteMessage : MCMessage <EDServerSyncedMessage>

@property (nonatomic) BOOL isPartial;
@property (nonatomic) BOOL partsHaveBeenCached;
@property (retain, nonatomic) EDMessageCategorizationResult *categorizationResult;
@property (nonatomic) long long authenticationState;
@property (readonly, nonatomic) id<EDIndexableAccount> account;
@property (readonly, nonatomic) id<EDIndexableMailbox> mailbox;
@property (readonly, copy) ECSubject *subjectIfAvailable;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, copy) NSArray *bccIfAvailable;
@property (readonly) unsigned long long attachmentCount;
@property (readonly) struct { unsigned char x0; unsigned char x1; unsigned char x2; } messageColor;
@property (readonly) BOOL messageColorIsHighlight;
@property (readonly) long long priority;
@property (readonly) BOOL wasActedOnByExtension;
@property (nonatomic) unsigned long long messageSize;
@property (readonly, copy, nonatomic) NSString *persistentID;
@property (readonly, copy) ECSubject *subject;
@property (readonly, copy) NSArray *from;
@property (readonly, copy) NSArray *to;
@property (readonly, copy) NSArray *cc;
@property (readonly, copy) NSArray *bcc;
@property (readonly, copy) NSArray *senders;
@property (readonly) NSDate *dateReceived;
@property (readonly) NSDate *dateSent;
@property (readonly, copy) NSArray *listUnsubscribe;
@property (readonly, copy) NSString *remoteID;
@property (readonly) long long conversationID;
@property (readonly, nonatomic) BOOL isServerSearchResult;
@property (readonly, nonatomic) ECMessageFlags *flags;
@property (readonly, nonatomic, getter=isPartOfExistingThread) BOOL partOfExistingThread;
@property (readonly, nonatomic) id<ECMimeBody> mimeBody;
@property (readonly, copy, nonatomic) NSDictionary *headersDictionary;
@property (readonly, copy, nonatomic) NSString *messageIDHeader;
@property (readonly) ECAngleBracketIDHash *messageIDHeaderHash;
@property (readonly) NSSet *labels;
@property (readonly, nonatomic) id<ECMessageHeaders> headers;
@property (readonly, nonatomic) id<ECMessageHeaders> headersIfAvailable;
@property (readonly, copy, nonatomic) NSArray *references;
@property (readonly, copy) NSUUID *documentID;
@property (readonly) unsigned long long numberOfAttachments;
@property (readonly, nonatomic) ECAngleBracketIDHash *listIDHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSize:(unsigned long long)a0;
- (BOOL)isMessageContentLocallyAvailable;

@end
