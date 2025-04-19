@class NSString, KHProjectBundle, NSURL, NSProgressIndicator, NSButton;

@interface KHProjectExportWindowController : NSWindowController <KHPDFGeneratorDelegate>

@property (nonatomic) double renderingTime;
@property (retain) NSString *statusMessage;
@property BOOL generatorStarted;
@property BOOL generatorRunning;
@property BOOL generatorCanceled;
@property (copy, nonatomic) NSURL *destinationFileURL;
@property (nonatomic) BOOL createProductionFile;
@property (copy, nonatomic) NSString *filePrefix;
@property (readonly) KHProjectBundle *projectBundle;
@property (weak) NSProgressIndicator *progressIndicator;
@property (weak) NSButton *cancelButton;

- (void).cxx_destruct;
- (void)updateProgress:(double)a0;
- (void)cancel:(id)a0;
- (void)windowDidLoad;
- (id)directoryURLForProject:(id)a0;
- (id)documentURLForProject:(id)a0;
- (void)generatorDidFinish;
- (id)initWithProjectBundle:(id)a0;
- (void)keepModalResponsive;
- (void)pdfProgress:(double)a0 page:(long long)a1 maxPage:(long long)a2 project:(id)a3;
- (BOOL)pdfShouldAbort;
- (void)startGenerator;

@end
