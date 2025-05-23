@class NSData, NSString, NSArray, NSDate, BMPBMailContentEvent, NSDictionary, BMNamedHandle, NSNumber;

@interface BMMailContentEvent : NSObject <BMPersonaAwareIdentifiableContentEvent, BMCommunicationsAccountContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating> {
    NSData *_data;
    BMPBMailContentEvent *_proto;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _protoLock;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *domainId;
@property (readonly, nonatomic) NSString *personaId;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSString *messageIdentifier;
@property (readonly, nonatomic) BMNamedHandle *fromHandle;
@property (readonly, nonatomic) NSArray *toHandles;
@property (readonly, nonatomic) NSArray *ccHandles;
@property (readonly, nonatomic) NSArray *bccHandles;
@property (readonly, nonatomic) NSDictionary *headers;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSData *htmlContent;
@property (readonly, nonatomic) NSString *textContent;
@property (readonly, nonatomic) BOOL isFullyDownloaded;
@property (readonly, nonatomic) NSString *securityMethod;
@property (readonly, nonatomic) NSArray *accountHandles;
@property (readonly, nonatomic) BMNamedHandle *replyTo;
@property (readonly, nonatomic) NSArray *mailboxIdentifiers;
@property (readonly, nonatomic) BMNamedHandle *listId;
@property (readonly, nonatomic) NSString *accountType;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) NSString *conversationId;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) NSNumber *mailCategories;
@property (readonly, nonatomic) NSNumber *isNew;
@property (readonly, nonatomic) NSNumber *isTwoFactorCode;
@property (readonly, nonatomic) NSNumber *isFromMe;
@property (readonly, nonatomic) NSNumber *isJunk;
@property (readonly, nonatomic) NSNumber *isRead;
@property (readonly, nonatomic) NSNumber *isVIP;
@property (readonly, nonatomic) NSNumber *isFlagged;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)json;
- (id)jsonDict;
- (id)serialize;
- (id)encodeAsProto;
- (id)initWithUniqueId:(id)a0 domainId:(id)a1 absoluteTimestamp:(double)a2 accountIdentifier:(id)a3 messageIdentifier:(id)a4 fromHandle:(id)a5 toHandles:(id)a6 ccHandles:(id)a7 bccHandles:(id)a8 headers:(id)a9 subject:(id)a10 htmlContent:(id)a11 textContent:(id)a12 isFullyDownloaded:(BOOL)a13 securityMethod:(id)a14 accountHandles:(id)a15 replyTo:(id)a16 mailboxIdentifiers:(id)a17 listId:(id)a18 accountType:(id)a19 attachments:(id)a20;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (void)_loadData;
- (void)_inflateFromProto:(id)a0;
- (id)_initWithUniqueId:(id)a0 domainId:(id)a1 personaId:(id)a2;
- (id)initWithProto:(id)a0;
- (id)initWithUniqueId:(id)a0 domainId:(id)a1 absoluteTimestamp:(double)a2 accountIdentifier:(id)a3 messageIdentifier:(id)a4 fromHandle:(id)a5 toHandles:(id)a6 ccHandles:(id)a7 bccHandles:(id)a8 headers:(id)a9 subject:(id)a10 htmlContent:(id)a11 textContent:(id)a12 isFullyDownloaded:(BOOL)a13 securityMethod:(id)a14 accountHandles:(id)a15 replyTo:(id)a16 mailboxIdentifiers:(id)a17 listId:(id)a18 accountType:(id)a19 attachments:(id)a20 contentProtection:(id)a21;
- (id)initWithUniqueId:(id)a0 domainId:(id)a1 personaId:(id)a2 absoluteTimestamp:(double)a3 accountIdentifier:(id)a4 messageIdentifier:(id)a5 fromHandle:(id)a6 toHandles:(id)a7 ccHandles:(id)a8 bccHandles:(id)a9 headers:(id)a10 subject:(id)a11 htmlContent:(id)a12 textContent:(id)a13 isFullyDownloaded:(BOOL)a14 securityMethod:(id)a15 accountHandles:(id)a16 replyTo:(id)a17 mailboxIdentifiers:(id)a18 listId:(id)a19 accountType:(id)a20 attachments:(id)a21 contentProtection:(id)a22;
- (id)initWithUniqueId:(id)a0 domainId:(id)a1 personaId:(id)a2 absoluteTimestamp:(double)a3 accountIdentifier:(id)a4 messageIdentifier:(id)a5 fromHandle:(id)a6 toHandles:(id)a7 ccHandles:(id)a8 bccHandles:(id)a9 headers:(id)a10 subject:(id)a11 htmlContent:(id)a12 textContent:(id)a13 isFullyDownloaded:(BOOL)a14 securityMethod:(id)a15 accountHandles:(id)a16 replyTo:(id)a17 mailboxIdentifiers:(id)a18 listId:(id)a19 accountType:(id)a20 attachments:(id)a21 contentProtection:(id)a22 conversationId:(id)a23 dateReceived:(id)a24 mailCategories:(id)a25 isNew:(id)a26 isTwoFactorCode:(id)a27 isFromMe:(id)a28 isJunk:(id)a29 isRead:(id)a30 isVIP:(id)a31 isFlagged:(id)a32;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;

@end
