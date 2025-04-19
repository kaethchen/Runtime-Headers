@class NSString, UTType, NSURL, NSImage, MCFileWrapper;

@interface MUIWebAttachment : NSObject <NSPasteboardReading, NSPasteboardWriting, NSSecureCoding, EFPubliclyDescribable> {
    NSString *_inlineTagName;
    NSString *_mimeType;
    UTType *_uti;
    NSURL *_fileURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *cidURL;
@property (nonatomic, getter=isInlinePDFAttachment) BOOL inlinePDFAttachment;
@property (readonly, nonatomic) MCFileWrapper *fileWrapper;
@property (copy, nonatomic) NSString *contentID;
@property (retain, nonatomic) NSURL *remoteURL;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, copy, nonatomic) NSString *mimeTypeForAttachmentTag;
@property (readonly, copy, nonatomic) UTType *uti;
@property (readonly, copy, nonatomic) NSString *inlineTagName;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) NSImage *iconImage;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *filenameForSaving;
@property (readonly, nonatomic) BOOL isAutoArchiveAttachment;
@property (readonly, weak, nonatomic) NSURL *downloadDirectory;
@property (readonly, nonatomic) BOOL isDataDownloaded;
@property (readonly, nonatomic) BOOL shouldAlwaysAutomaticallyDownload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;

+ (id)readableTypesForPasteboard:(id)a0;
+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFileWrapper:(id)a0;
- (id)initWithPasteboardPropertyList:(id)a0 ofType:(id)a1;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (id)_fileURLIfAvailable;
- (id)_mimeTypeForFilename:(id)a0;
- (void)markAsInlinePDFAttachment;

@end
