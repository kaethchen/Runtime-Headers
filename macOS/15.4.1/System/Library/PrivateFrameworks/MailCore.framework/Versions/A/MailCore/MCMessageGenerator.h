@class NSArray, MEComposeContext;
@protocol MEMessageEncoder;

@interface MCMessageGenerator : NSObject {
    BOOL _shouldMarkNonresizableAttachmentData;
}

@property (nonatomic) unsigned long long encodingHint;
@property (nonatomic) BOOL createsMimeAlternatives;
@property (nonatomic) BOOL createsPlainTextOnly;
@property (nonatomic) BOOL alwaysCreatesRichText;
@property (nonatomic) BOOL allows8BitMimeParts;
@property (nonatomic) BOOL allowsBinaryMimeParts;
@property (nonatomic) BOOL allowsAppleDoubleAttachments;
@property (retain, nonatomic) id<MEMessageEncoder> encoder;
@property (retain, nonatomic) MEComposeContext *composeContext;
@property (copy, nonatomic) NSArray *encryptionCertificates;

+ (id)newMessageWithBodyData:(id)a0 headers:(id)a1;
+ (id)domainHintForResentIDFromHeaders:(id)a0 hasResentFromHeaders:(BOOL *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)appendDataForMimePart:(id)a0 toData:(id)a1 withPartData:(id)a2;
- (id)newMessageWithAttributedString:(id)a0 headers:(id)a1;
- (id)newMessageWithHtmlString:(id)a0 plainTextAlternative:(id)a1 otherHtmlStringsAndAttachments:(id)a2 headers:(id)a3;
- (id)_newPartForAttachment:(id)a0 partData:(id)a1;
- (id)_createOutgoingFromTopLevelPart:(id)a0 topLevelHeaders:(id)a1 datasByMimePart:(id)a2;
- (id)_createOutgoingMessageFromData:(id)a0 headers:(id)a1;
- (id)_createOutgoingMessageUsingEncoder:(id)a0 topLevelPart:(id)a1 topLevelHeaders:(id)a2 datasByMimePart:(id)a3 isDraft:(BOOL)a4 error:(id *)a5;
- (BOOL)_encodeDataForMimePart:(id)a0 withPartData:(id)a1;
- (id)_fullMessageDataForTopLevelPart:(id)a0 topLevelHeaders:(id)a1 datasByMimePart:(id)a2;
- (id)_hfsFilenameDataWithFilename:(id)a0 partData:(id)a1;
- (id)_newDataForMimePart:(id)a0 withPartData:(id)a1;
- (id)_newMimePartWithAttributedString:(id)a0 partData:(id)a1 outputRich:(BOOL)a2;
- (id)_newMimePartWithWebResource:(id)a0 partData:(id)a1 seenURLStrings:(id)a2;
- (id)_newOutgoingMessageFromTopLevelMimePart:(id)a0 topLevelHeaders:(id)a1 withPartData:(id)a2 isDraft:(BOOL)a3;
- (id)_newPartAndDataForHTMLStringAndMIMECharset:(id)a0 partData:(id)a1;
- (id)_newPartAndDataForString:(id)a0 charset:(id)a1 subtype:(id)a2 partData:(id)a3;
- (id)_newPartForDirectoryAttachment:(id)a0 partData:(id)a1;
- (id)_newPlainTextPartWithAttributedString:(id)a0 partData:(id)a1;
- (id)_newRFC2047NameParameterDataForMimePart:(id)a0;
- (void)_recursivelyAddSubresourcesFromArchive:(id)a0 toArray:(id)a1;
- (void)_setMessageIDAndMIMETypeForTopLevelHeaders:(id)a0;
- (void)_setMimeTypeFromAttachment:(id)a0 onMimePart:(id)a1 filename:(id *)a2;
- (void)appendHeadersForMimePart:(id)a0 toHeaders:(id)a1;
- (id)datasByMIMEPartForTopLevelPart:(id)a0 removingAttachments:(BOOL)a1;
- (id)newDataForAttributedString:(id)a0;
- (id)newMessageByRemovingAttachmentsFromMessage:(id)a0;
- (id)newMessageWithAttributedString:(id)a0 headers:(id)a1 shouldSign:(BOOL)a2;
- (id)newMessageWithAttributedString:(id)a0 headers:(id)a1 shouldSign:(BOOL)a2 isDraft:(BOOL)a3;
- (id)newMessageWithHtmlString:(id)a0 plainTextAlternative:(id)a1 otherHtmlStringsAndAttachments:(id)a2 headers:(id)a3 isDraft:(BOOL)a4;
- (void)setShouldMarkNonresizableAttachmentData:(BOOL)a0;

@end
