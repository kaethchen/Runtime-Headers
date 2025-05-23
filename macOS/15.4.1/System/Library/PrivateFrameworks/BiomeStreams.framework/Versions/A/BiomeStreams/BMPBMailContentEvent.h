@class NSString, NSData, NSMutableArray, BMPBNamedHandle;

@interface BMPBMailContentEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char dateReceived : 1; unsigned char mailCategories : 1; unsigned char isFlagged : 1; unsigned char isFromMe : 1; unsigned char isFullyDownloaded : 1; unsigned char isJunk : 1; unsigned char isNew : 1; unsigned char isRead : 1; unsigned char isTwoFactorCode : 1; unsigned char isVIP : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) BOOL hasDomainId;
@property (retain, nonatomic) NSString *domainId;
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) BOOL hasAccountIdentifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL hasMessageIdentifier;
@property (retain, nonatomic) NSString *messageIdentifier;
@property (readonly, nonatomic) BOOL hasFrom;
@property (retain, nonatomic) NSString *from;
@property (readonly, nonatomic) BOOL hasTo;
@property (retain, nonatomic) NSString *to;
@property (readonly, nonatomic) BOOL hasCc;
@property (retain, nonatomic) NSString *cc;
@property (readonly, nonatomic) BOOL hasBcc;
@property (retain, nonatomic) NSString *bcc;
@property (retain, nonatomic) NSMutableArray *headers;
@property (readonly, nonatomic) BOOL hasSubject;
@property (retain, nonatomic) NSString *subject;
@property (readonly, nonatomic) BOOL hasHtmlContentData;
@property (retain, nonatomic) NSString *htmlContentData;
@property (nonatomic) BOOL hasIsFullyDownloaded;
@property (nonatomic) BOOL isFullyDownloaded;
@property (readonly, nonatomic) BOOL hasHtmlContent;
@property (retain, nonatomic) NSData *htmlContent;
@property (readonly, nonatomic) BOOL hasTextContent;
@property (retain, nonatomic) NSString *textContent;
@property (readonly, nonatomic) BOOL hasSecurityMethod;
@property (retain, nonatomic) NSString *securityMethod;
@property (retain, nonatomic) NSMutableArray *accountHandles;
@property (readonly, nonatomic) BOOL hasReplyTo;
@property (retain, nonatomic) BMPBNamedHandle *replyTo;
@property (retain, nonatomic) NSMutableArray *mailboxIdentifiers;
@property (readonly, nonatomic) BOOL hasListId;
@property (retain, nonatomic) BMPBNamedHandle *listId;
@property (readonly, nonatomic) BOOL hasAccountType;
@property (retain, nonatomic) NSString *accountType;
@property (retain, nonatomic) NSMutableArray *attachments;
@property (readonly, nonatomic) BOOL hasFromHandle;
@property (retain, nonatomic) BMPBNamedHandle *fromHandle;
@property (retain, nonatomic) NSMutableArray *toHandles;
@property (retain, nonatomic) NSMutableArray *ccHandles;
@property (retain, nonatomic) NSMutableArray *bccHandles;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (retain, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) BOOL hasPersonaId;
@property (retain, nonatomic) NSString *personaId;
@property (readonly, nonatomic) BOOL hasConversationId;
@property (retain, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasDateReceived;
@property (nonatomic) double dateReceived;
@property (nonatomic) BOOL hasMailCategories;
@property (nonatomic) int mailCategories;
@property (nonatomic) BOOL hasIsNew;
@property (nonatomic) BOOL isNew;
@property (nonatomic) BOOL hasIsTwoFactorCode;
@property (nonatomic) BOOL isTwoFactorCode;
@property (nonatomic) BOOL hasIsFromMe;
@property (nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL hasIsJunk;
@property (nonatomic) BOOL isJunk;
@property (nonatomic) BOOL hasIsRead;
@property (nonatomic) BOOL isRead;
@property (nonatomic) BOOL hasIsVIP;
@property (nonatomic) BOOL isVIP;
@property (nonatomic) BOOL hasIsFlagged;
@property (nonatomic) BOOL isFlagged;

+ (Class)attachmentsType;
+ (Class)accountHandlesType;
+ (Class)bccHandlesType;
+ (Class)ccHandlesType;
+ (Class)headersType;
+ (Class)mailboxIdentifiersType;
+ (Class)toHandlesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAttachments:(id)a0;
- (id)attachmentsAtIndex:(unsigned long long)a0;
- (unsigned long long)attachmentsCount;
- (void)clearAttachments;
- (void)addHeaders:(id)a0;
- (unsigned long long)bccHandlesCount;
- (id)headersAtIndex:(unsigned long long)a0;
- (void)clearBccHandles;
- (id)accountHandlesAtIndex:(unsigned long long)a0;
- (unsigned long long)accountHandlesCount;
- (void)addAccountHandles:(id)a0;
- (void)addBccHandles:(id)a0;
- (void)addCcHandles:(id)a0;
- (void)addMailboxIdentifiers:(id)a0;
- (void)addToHandles:(id)a0;
- (id)bccHandlesAtIndex:(unsigned long long)a0;
- (id)ccHandlesAtIndex:(unsigned long long)a0;
- (unsigned long long)ccHandlesCount;
- (void)clearAccountHandles;
- (void)clearCcHandles;
- (void)clearHeaders;
- (void)clearMailboxIdentifiers;
- (void)clearToHandles;
- (unsigned long long)headersCount;
- (id)mailboxIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)mailboxIdentifiersCount;
- (id)toHandlesAtIndex:(unsigned long long)a0;
- (unsigned long long)toHandlesCount;

@end
