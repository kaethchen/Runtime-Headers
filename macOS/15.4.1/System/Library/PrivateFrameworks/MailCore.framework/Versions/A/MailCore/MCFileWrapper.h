@class NSString, NSArray, NSDate;

@interface MCFileWrapper : EFFileWrapper

@property (copy, nonatomic) NSString *contentID;
@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSArray *whereFroms;
@property (retain, nonatomic) NSDate *dateSent;
@property (retain, nonatomic) NSDate *dateReceived;
@property (copy, nonatomic) NSString *senderName;
@property (copy, nonatomic) NSString *senderEmailAddress;
@property (copy, nonatomic) NSArray *recipientNames;
@property (copy, nonatomic) NSArray *recipientEmailAddress;
@property (nonatomic) BOOL isRemoteAttachment;
@property (copy, nonatomic) NSString *messageID;
@property (readonly, copy, nonatomic) NSString *bestMimeType;
@property (readonly, nonatomic) BOOL isOrderFile;
@property (readonly, nonatomic) BOOL isImageFile;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isRemotelyAccessed;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) unsigned long long imageBytes;

+ (id)uniquedPathForFile:(id)a0 inDirectory:(id)a1;

- (void).cxx_destruct;
- (id)initRegularFileWithContents:(id)a0;
- (void)_isImageFile:(BOOL *)a0 isPDF:(BOOL *)a1 bestMimeType:(id *)a2;
- (id)appleDoubleDataWithFilename:(const char *)a0 length:(unsigned long long)a1;
- (id)appleSingleDataWithFilename:(const char *)a0 length:(unsigned long long)a1;
- (unsigned long long)approximateSizeAllowingDiskIO:(BOOL)a0;
- (void)isImageFile:(BOOL *)a0 isPDF:(BOOL *)a1;

@end
