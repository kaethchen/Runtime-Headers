@class NSMutableDictionary;

@interface _ICNAAttachmentReportToNote : NSObject

@property (retain, nonatomic) NSMutableDictionary *countOfAttachmentByUTI;
@property (nonatomic) unsigned long long countOfAttachments;
@property (nonatomic) unsigned long long countOfAudioAttachments;
@property (nonatomic) unsigned long long countOfAudioAttachmentsRecordedInNotes;
@property (nonatomic) unsigned long long countOfAudioAttachmentsWithAppendedAudio;
@property (nonatomic) unsigned long long countOfInlineDrawingV1PencilStrokes;
@property (nonatomic) unsigned long long countOfInlineDrawingV1FingerStrokes;
@property (nonatomic) unsigned long long countOfInlineDrawingV2PencilStrokes;
@property (nonatomic) unsigned long long countOfInlineDrawingV2FingerStrokes;
@property (nonatomic) unsigned long long countOfFullscreenDrawingStrokes;
@property (nonatomic) BOOL hasAudioTranscript;
@property (nonatomic) BOOL hasAudioSummary;
@property (nonatomic) BOOL hasDeepLink;
@property (nonatomic) BOOL hasSafariHighlight;
@property (nonatomic) BOOL hasImages;
@property (nonatomic) BOOL hasMathUsage;

- (id)init;
- (void).cxx_destruct;
- (void)reportAttachmentTypeUTI:(id)a0;
- (void)reportDrawingWithSnapshotData:(id)a0;

@end
