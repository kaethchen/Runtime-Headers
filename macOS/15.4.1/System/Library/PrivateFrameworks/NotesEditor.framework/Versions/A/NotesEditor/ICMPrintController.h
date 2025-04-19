@class ICNote, ICTextController, ICMacTextView;

@interface ICMPrintController : NSObject

@property (retain, nonatomic) ICTextController *textController;
@property (retain, nonatomic) ICMacTextView *textView;
@property (retain, nonatomic) ICNote *note;

- (void).cxx_destruct;
- (id)PDFRepresentation;
- (id)printJobTitle;
- (id)configuredPrintOperationWithPrintInfo:(id)a0 isForPrintingPDFToData:(id)a1;
- (void)exportToPDFModalForWindow:(id)a0 delegate:(id)a1;
- (id)initWithTextView:(id)a0 note:(id)a1 editorLayoutManager:(id)a2;
- (id)paginatedPDFRepresentation;
- (void)postPrintCleanup;
- (void)printModalForWindow:(id)a0 delegate:(id)a1;

@end
