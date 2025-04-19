@class NSManagedObjectContext, PKDrawing, ICSelectorDelayer, ICAttachment;

@interface ICInlineDrawingChangeCoalescer : NSObject

@property (retain, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) ICSelectorDelayer *processChangesSelectorDelayer;
@property (retain, nonatomic) PKDrawing *latestDrawing;
@property (nonatomic) unsigned long long numberOfChanges;
@property (retain, nonatomic) NSManagedObjectContext *workerContext;
@property (retain, nonatomic) NSManagedObjectContext *mainContext;
@property (retain, nonatomic) NSManagedObjectContext *handwritingRecognitionContext;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)hasChanges;
- (id)initWithAttachment:(id)a0;
- (void)drawingDataDidChange:(id)a0;
- (void)mergeDrawingChanges;
- (void)mergeDrawingWithDrawing:(id)a0;
- (void)processIndexableContentWithCompletion:(id /* block */)a0;
- (id)retrieveAndClearLatestDrawingToMerge;
- (void)updateNowIfNecessary;
- (void)updateVersionIfNeededForAttachment:(id)a0 withDrawing:(id)a1;

@end
