@class NSString, NSDictionary, NSData, NSDate, IMDMessageRecord;

@interface IMDAttachmentRecord : IMDRecord <IMDBridgedRecord>

@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) NSString *uti;
@property (readonly, nonatomic) long long ckSyncState;
@property (readonly, copy, nonatomic) NSData *ckServerChangeTokenBlob;
@property (readonly, copy, nonatomic) NSString *ckRecordID;
@property (readonly, nonatomic) BOOL hideAttachment;
@property (readonly, nonatomic) long long rowID;
@property (readonly, copy, nonatomic) NSString *guid;
@property (readonly, copy, nonatomic) NSString *originalGUID;
@property (readonly, copy, nonatomic) NSDate *createdDate;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSString *transferName;
@property (readonly, copy, nonatomic) NSString *utiString;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) long long transferState;
@property (readonly, nonatomic, getter=isOutgoing) BOOL outgoing;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) long long totalBytes;
@property (readonly, nonatomic, getter=isSticker) BOOL sticker;
@property (readonly, nonatomic, getter=isAdaptiveImageGlyph) BOOL adaptiveImageGlyph;
@property (readonly, copy, nonatomic) NSString *emojiImageContentIdentifier;
@property (readonly, copy, nonatomic) NSString *emojiImageShortDescription;
@property (readonly, nonatomic, getter=isCommSafetySensitive) BOOL commSafetySensitive;
@property (readonly, copy, nonatomic) NSDictionary *transferUserInfo;
@property (readonly, copy, nonatomic) NSDictionary *stickerUserInfo;
@property (readonly, copy, nonatomic) NSDictionary *attributionInfo;
@property (readonly, nonatomic) long long cloudSyncState;
@property (readonly, copy, nonatomic) NSData *cloudServerChangeToken;
@property (readonly, copy, nonatomic) NSString *cloudRecordID;
@property (readonly, nonatomic) long long previewGenerationState;
@property (readonly, nonatomic) IMDMessageRecord *messageRecord;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)keyPathsToColumns;

- (id)init;
- (unsigned long long)_cfTypeID;
- (struct __CFArray { } *)_localCache;
- (struct { char *x0; long long x1; struct *x2; unsigned int x3; void *x4; })_propertyDescriptorForProperty:(long long)a0;
- (void *)_fetchUpdatedRecord;
- (int)_propertyIDForProperty:(long long)a0;
- (void)_write;
- (void)_writeIfNeededForPreviewGenerationStateMigration;
- (struct _IMDAttachmentRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; } *)cfAttachmentRecord;
- (id)initWithRecordRef:(struct _IMDAttachmentRecordStruct { } *)a0;

@end
