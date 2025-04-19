@class NSString, NSArray, BMProactiveHarvestingNamedHandle, NSDate, BMProactiveHarvestingContentAttachment;

@interface BMProactiveHarvestingMessages : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *domainID;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *conversationId;
@property (readonly, nonatomic) NSString *author;
@property (readonly, nonatomic) NSString *suggestedNickname;
@property (readonly, nonatomic) NSString *suggestedPhotoPath;
@property (readonly, nonatomic) NSString *recipients;
@property (readonly, nonatomic) NSString *attachmentURL;
@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) BMProactiveHarvestingNamedHandle *fromHandle;
@property (readonly, nonatomic) NSArray *toHandles;
@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSString *accountType;
@property (readonly, nonatomic) NSArray *accountHandles;
@property (readonly, nonatomic) BMProactiveHarvestingContentAttachment *attachment;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) NSString *personaId;
@property (readonly, nonatomic) BOOL isNew;
@property (nonatomic) BOOL hasIsNew;
@property (readonly, nonatomic) BOOL isTwoFactorCode;
@property (nonatomic) BOOL hasIsTwoFactorCode;
@property (readonly, nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL hasIsFromMe;
@property (readonly, nonatomic) BOOL isGroupThread;
@property (nonatomic) BOOL hasIsGroupThread;
@property (readonly, nonatomic) BOOL isJunk;
@property (nonatomic) BOOL hasIsJunk;
@property (readonly, nonatomic) BOOL isRead;
@property (nonatomic) BOOL hasIsRead;
@property (readonly, nonatomic) BOOL isPinned;
@property (nonatomic) BOOL hasIsPinned;
@property (readonly, nonatomic) BOOL isBusinessChat;
@property (nonatomic) BOOL hasIsBusinessChat;
@property (readonly, nonatomic) NSString *tapbackAssociatedMessageID;
@property (readonly, nonatomic) int tapbackType;
@property (nonatomic) BOOL hasTapbackType;
@property (readonly, nonatomic) NSString *messageType;
@property (readonly, nonatomic) NSString *messagesService;
@property (readonly, nonatomic) int messageEffect;
@property (nonatomic) BOOL hasMessageEffect;
@property (readonly, nonatomic) BOOL isKnownSender;
@property (nonatomic) BOOL hasIsKnownSender;
@property (readonly, nonatomic) NSString *conversationUUID;
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
- (id)_toHandlesJSONArray;
- (id)initWithUniqueID:(id)a0 domainID:(id)a1 absoluteTimestamp:(id)a2 conversationId:(id)a3 author:(id)a4 suggestedNickname:(id)a5 suggestedPhotoPath:(id)a6 recipients:(id)a7 attachmentURL:(id)a8 content:(id)a9 fromHandle:(id)a10 toHandles:(id)a11 accountIdentifier:(id)a12 accountType:(id)a13 accountHandles:(id)a14 attachment:(id)a15 url:(id)a16 contentProtection:(id)a17 personaId:(id)a18;
- (id)initWithUniqueID:(id)a0 domainID:(id)a1 absoluteTimestamp:(id)a2 conversationId:(id)a3 author:(id)a4 suggestedNickname:(id)a5 suggestedPhotoPath:(id)a6 recipients:(id)a7 attachmentURL:(id)a8 content:(id)a9 fromHandle:(id)a10 toHandles:(id)a11 accountIdentifier:(id)a12 accountType:(id)a13 accountHandles:(id)a14 attachment:(id)a15 url:(id)a16 contentProtection:(id)a17 personaId:(id)a18 isNew:(id)a19 isTwoFactorCode:(id)a20 isFromMe:(id)a21 isGroupThread:(id)a22 isJunk:(id)a23 isRead:(id)a24 isPinned:(id)a25 isBusinessChat:(id)a26 tapbackAssociatedMessageID:(id)a27 tapbackType:(id)a28 messageType:(id)a29 messagesService:(id)a30;
- (id)initWithUniqueID:(id)a0 domainID:(id)a1 absoluteTimestamp:(id)a2 conversationId:(id)a3 author:(id)a4 suggestedNickname:(id)a5 suggestedPhotoPath:(id)a6 recipients:(id)a7 attachmentURL:(id)a8 content:(id)a9 fromHandle:(id)a10 toHandles:(id)a11 accountIdentifier:(id)a12 accountType:(id)a13 accountHandles:(id)a14 attachment:(id)a15 url:(id)a16 contentProtection:(id)a17 personaId:(id)a18 isNew:(id)a19 isTwoFactorCode:(id)a20 isFromMe:(id)a21 isGroupThread:(id)a22 isJunk:(id)a23 isRead:(id)a24 isPinned:(id)a25 isBusinessChat:(id)a26 tapbackAssociatedMessageID:(id)a27 tapbackType:(id)a28 messageType:(id)a29 messagesService:(id)a30 messageEffect:(id)a31 isKnownSender:(id)a32 conversationUUID:(id)a33;

@end
