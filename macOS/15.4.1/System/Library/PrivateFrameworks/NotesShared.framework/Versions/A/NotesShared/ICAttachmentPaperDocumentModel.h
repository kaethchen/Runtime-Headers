@interface ICAttachmentPaperDocumentModel : ICAttachmentPaperBundleModel

@property (nonatomic) unsigned long long paperPageCount;

+ (long long)baseNotesVersion;

- (id)additionalIndexableTextContentInNote;
- (BOOL)supportsQuickLook;

@end
