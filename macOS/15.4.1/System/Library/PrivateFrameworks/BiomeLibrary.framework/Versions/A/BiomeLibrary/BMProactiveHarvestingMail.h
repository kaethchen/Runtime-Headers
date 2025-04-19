@class NSString, NSArray, NSData, NSDate, BMProactiveHarvestingNamedHandle;

@interface BMProactiveHarvestingMail : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
    BOOL _hasRaw_dateReceived;
    double _raw_dateReceived;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *domainID;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSString *messageIdentifier;
@property (readonly, nonatomic) NSString *fromField;
@property (readonly, nonatomic) NSString *toField;
@property (readonly, nonatomic) NSString *ccField;
@property (readonly, nonatomic) NSString *bccField;
@property (readonly, nonatomic) NSArray *headers;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *htmlContentData;
@property (readonly, nonatomic) BOOL isFullyDownloaded;
@property (nonatomic) BOOL hasIsFullyDownloaded;
@property (readonly, nonatomic) NSData *htmlContent;
@property (readonly, nonatomic) NSString *textContent;
@property (readonly, nonatomic) NSString *securityMethod;
@property (readonly, nonatomic) NSArray *accountHandles;
@property (readonly, nonatomic) BMProactiveHarvestingNamedHandle *replyTo;
@property (readonly, nonatomic) NSArray *mailboxIdentifiers;
@property (readonly, nonatomic) BMProactiveHarvestingNamedHandle *listID;
@property (readonly, nonatomic) NSString *accountType;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) BMProactiveHarvestingNamedHandle *fromHandle;
@property (readonly, nonatomic) NSArray *toHandles;
@property (readonly, nonatomic) NSArray *ccHandles;
@property (readonly, nonatomic) NSArray *bccHandles;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) NSString *personaId;
@property (readonly, nonatomic) NSString *conversationId;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) int mailCategories;
@property (nonatomic) BOOL hasMailCategories;
@property (readonly, nonatomic) BOOL isNew;
@property (nonatomic) BOOL hasIsNew;
@property (readonly, nonatomic) BOOL isTwoFactorCode;
@property (nonatomic) BOOL hasIsTwoFactorCode;
@property (readonly, nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL hasIsFromMe;
@property (readonly, nonatomic) BOOL isJunk;
@property (nonatomic) BOOL hasIsJunk;
@property (readonly, nonatomic) BOOL isRead;
@property (nonatomic) BOOL hasIsRead;
@property (readonly, nonatomic) BOOL isVIP;
@property (nonatomic) BOOL hasIsVIP;
@property (readonly, nonatomic) BOOL isFlagged;
@property (nonatomic) BOOL hasIsFlagged;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)_accountHandlesJSONArray;
- (id)_attachmentsJSONArray;
- (id)_bccHandlesJSONArray;
- (id)_ccHandlesJSONArray;
- (id)_headersJSONArray;
- (id)_mailboxIdentifiersJSONArray;
- (id)_toHandlesJSONArray;
- (id)initWithUniqueID:(id)a0 domainID:(id)a1 absoluteTimestamp:(id)a2 accountIdentifier:(id)a3 messageIdentifier:(id)a4 fromField:(id)a5 toField:(id)a6 ccField:(id)a7 bccField:(id)a8 headers:(id)a9 subject:(id)a10 htmlContentData:(id)a11 isFullyDownloaded:(id)a12 htmlContent:(id)a13 textContent:(id)a14 securityMethod:(id)a15 accountHandles:(id)a16 replyTo:(id)a17 mailboxIdentifiers:(id)a18 listID:(id)a19 accountType:(id)a20 attachments:(id)a21 fromHandle:(id)a22 toHandles:(id)a23 ccHandles:(id)a24 bccHandles:(id)a25 contentProtection:(id)a26 personaId:(id)a27;
- (id)initWithUniqueID:(id)a0 domainID:(id)a1 absoluteTimestamp:(id)a2 accountIdentifier:(id)a3 messageIdentifier:(id)a4 fromField:(id)a5 toField:(id)a6 ccField:(id)a7 bccField:(id)a8 headers:(id)a9 subject:(id)a10 htmlContentData:(id)a11 isFullyDownloaded:(id)a12 htmlContent:(id)a13 textContent:(id)a14 securityMethod:(id)a15 accountHandles:(id)a16 replyTo:(id)a17 mailboxIdentifiers:(id)a18 listID:(id)a19 accountType:(id)a20 attachments:(id)a21 fromHandle:(id)a22 toHandles:(id)a23 ccHandles:(id)a24 bccHandles:(id)a25 contentProtection:(id)a26 personaId:(id)a27 conversationId:(id)a28 dateReceived:(id)a29 mailCategories:(id)a30 isNew:(id)a31 isTwoFactorCode:(id)a32 isFromMe:(id)a33 isJunk:(id)a34 isRead:(id)a35 isVIP:(id)a36 isFlagged:(id)a37;

@end
