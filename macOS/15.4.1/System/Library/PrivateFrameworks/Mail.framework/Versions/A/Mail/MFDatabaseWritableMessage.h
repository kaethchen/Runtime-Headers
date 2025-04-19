@class ECAngleBracketIDHash, NSString, NSArray, NSUUID, MCMessageHeaders, MFMessageWritePreparedStatements, ECSubject;

@interface MFDatabaseWritableMessage : NSObject {
    char *_color;
}

@property (readonly, nonatomic) MFMessageWritePreparedStatements *preparedStatements;
@property (nonatomic) long long globalMessageID;
@property (nonatomic) long long subjectID;
@property (nonatomic) long long senderID;
@property (nonatomic) long long businessID;
@property (nonatomic) long long conversationID;
@property (nonatomic) long long mailboxID;
@property (nonatomic) long long fuzzyAncestor;
@property (nonatomic) long long authenticationState;
@property (nonatomic) int automatedConversationType;
@property (nonatomic) int rootStatus;
@property (nonatomic) int conversationPosition;
@property (nonatomic) unsigned long long conversationFlags;
@property (nonatomic) int dateReceived;
@property (nonatomic) int dateSent;
@property (nonatomic) int dateViewed;
@property (nonatomic) char messageType;
@property (nonatomic) unsigned long long size;
@property (nonatomic) long long flags;
@property (nonatomic) char *color;
@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) ECSubject *subject;
@property (copy, nonatomic) ECAngleBracketIDHash *messageIDHeaderHash;
@property (copy, nonatomic) NSString *remoteMailboxIDString;
@property (copy, nonatomic) NSArray *toRecipients;
@property (retain, nonatomic) NSUUID *documentID;
@property (retain, nonatomic) MCMessageHeaders *headers;
@property (copy, nonatomic) NSArray *referencesHashes;
@property (retain, nonatomic) ECAngleBracketIDHash *listIDHash;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)_findExistingSubjectText:(const char *)a0;
- (long long)_globalIDForMessageIDHeaderHash:(id)a0 categorizationResult:(id)a1 globalMessageIDsCache:(id)a2 cacheIsExhaustive:(BOOL)a3;
- (BOOL)_insertRecipientsWithMessageID:(long long)a0 recipients:(id)a1 recipientType:(char)a2 position:(unsigned long long)a3 addressRowIDsCache:(id)a4 cacheIsExhaustive:(BOOL)a5;
- (long long)_rowIDForAddress:(id)a0 comment:(id)a1;
- (long long)_rowIDForAddressText:(id)a0 cache:(id)a1 cacheIsExhaustive:(BOOL)a2;
- (long long)_rowIDForSubject:(id)a0 subjectRowIDsCache:(id)a1 cacheIsExhaustive:(BOOL)a2;
- (void)bindFieldsToPreparedStatement:(id)a0 isUpdate:(BOOL)a1;
- (id)initWithPreparedStatements:(id)a0;
- (void)insertAttachmentsWithMessageID:(long long)a0 fromMessage:(id)a1;
- (void)insertCalendarEvent:(id)a0 withMessageID:(long long)a1;
- (BOOL)insertRecpientsWithMessageID:(long long)a0 fromMessage:(id)a1 addressRowIDsCache:(id)a2 cacheIsExhaustive:(BOOL)a3;
- (BOOL)insertReferencesWithMessageID:(long long)a0;
- (id)propertyListFromMessage:(id)a0 remoteID:(id)a1 gmailLabels:(id)a2;
- (void)setupLibraryMessage:(id)a0 fromMessage:(id)a1;
- (void)updateFieldsFromLibraryWithMessageRowID:(long long)a0;
- (BOOL)updateFieldsFromMessage:(id)a0 subjectRowIDsCache:(id)a1 globalMessageIDsCache:(id)a2 addressRowIDsCache:(id)a3 cacheIsExhaustive:(BOOL)a4 addressesNeedingBusinessMetadata:(id *)a5;

@end
