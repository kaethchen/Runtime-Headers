@class NSString, NSNumber;

@interface ICASNoteAttachmentItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentDocScan;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentInlineDrawingV1;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentInlineDrawingV2;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentPaperKit;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentFullscreenDrawing;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentTables;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentOther;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentRichUrl;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentMapLink;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentDeepLink;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithPaperDocument;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithPdfDocument;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithNoteLinks;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithFolderLinks;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentAudio;
@property (readonly, nonatomic) NSNumber *totalCountOfAudioAttachments;
@property (readonly, nonatomic) NSNumber *totalCountOfAudioAttachmentsRecordedInNotes;
@property (readonly, nonatomic) NSNumber *totalCountOfAudioAttachmentsWithAppendedAudio;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentAudioTranscript;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentAudioSummary;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTotalCountOfNotesWithAttachmentDocScan:(id)a0 totalCountOfNotesWithAttachmentInlineDrawingV1:(id)a1 totalCountOfNotesWithAttachmentInlineDrawingV2:(id)a2 totalCountOfNotesWithAttachmentPaperKit:(id)a3 totalCountOfNotesWithAttachmentFullscreenDrawing:(id)a4 totalCountOfNotesWithAttachmentTables:(id)a5 totalCountOfNotesWithAttachmentOther:(id)a6 totalCountOfNotesWithAttachmentRichUrl:(id)a7 totalCountOfNotesWithAttachmentMapLink:(id)a8 totalCountOfNotesWithAttachmentDeepLink:(id)a9 totalCountOfNotesWithPaperDocument:(id)a10 totalCountOfNotesWithPdfDocument:(id)a11 totalCountOfNotesWithNoteLinks:(id)a12 totalCountOfNotesWithFolderLinks:(id)a13 totalCountOfNotesWithAttachmentAudio:(id)a14 totalCountOfAudioAttachments:(id)a15 totalCountOfAudioAttachmentsRecordedInNotes:(id)a16 totalCountOfAudioAttachmentsWithAppendedAudio:(id)a17 totalCountOfNotesWithAttachmentAudioTranscript:(id)a18 totalCountOfNotesWithAttachmentAudioSummary:(id)a19;

@end
