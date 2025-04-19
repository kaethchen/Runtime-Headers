@class NSString, NSURL, ICAttachmentGalleryModel, ICAttachment;

@interface ICMImageGalleryPrintController : NSObject

@property (retain, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) ICAttachmentGalleryModel *galleryModel;
@property (retain, nonatomic) NSURL *pdfURL;
@property (retain, nonatomic) NSString *printJobTitle;
@property (nonatomic) BOOL shouldSaveDirectoryToUserDefaults;

- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0;
- (void)printOperationDidRun:(id)a0 success:(BOOL)a1 contextInfo:(void *)a2;
- (void)exportToPDFModalForWindow:(id)a0;
- (void)printModalForWindow:(id)a0;

@end
