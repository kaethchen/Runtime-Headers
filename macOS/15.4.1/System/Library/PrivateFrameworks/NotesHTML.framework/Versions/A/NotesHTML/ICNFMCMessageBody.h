@class ICNFMCMimePart, NSArray, ICNFMCMessage, NSAttributedString, WebArchive;

@interface ICNFMCMessageBody : NSObject {
    id _messageOrClass;
}

@property long long messageID;
@property (weak) ICNFMCMessage *message;
@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property BOOL hideCalendarMimePart;
@property (readonly, nonatomic) BOOL isHTML;
@property (readonly, nonatomic) ICNFMCMimePart *textHtmlPart;
@property (readonly, nonatomic) WebArchive *webArchive;
@property (readonly, nonatomic) BOOL isRich;
@property (readonly, copy, nonatomic) NSArray *attachments;
@property (readonly, copy, nonatomic) NSArray *attachmentFilenames;

- (id)init;
- (void).cxx_destruct;
- (id)attachmentsWithContext:(id)a0;
- (void)calculateNumberOfAttachmentsDecodeIfNeeded;
- (void)calculateNumberOfAttachmentsIfNeeded;
- (unsigned int)numberOfAttachmentsWithFilenames:(id)a0 isSigned:(BOOL *)a1 encrypted:(BOOL *)a2 numberOfTNEFAttachments:(unsigned int *)a3;
- (void)renderString:(id)a0;

@end
