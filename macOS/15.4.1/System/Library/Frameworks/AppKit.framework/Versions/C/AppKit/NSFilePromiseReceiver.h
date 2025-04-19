@class NSArray, NSString, NSOperationQueue, NSPasteboardItem, NSPasteboard;

@interface NSFilePromiseReceiver : NSObject <NSFilePromiseCompletionTarget, NSPasteboardReading> {
    NSPasteboard *_pasteboard;
    NSPasteboardItem *_pasteboardItem;
    NSArray *_fileURLs;
    NSOperationQueue *_operationQueue;
    long long _promiseType;
    id /* block */ _readerBlock;
    struct { unsigned char usesFileCoordination : 1; unsigned char registered : 1; unsigned int reserved : 30; } _flags;
}

@property (class, readonly, copy) NSArray *readableDraggedTypes;

@property (readonly, copy) NSArray *alternateFileTypes;
@property (readonly, copy) NSArray *fileTypes;
@property (readonly, copy) NSArray *fileNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)acceptableDragTypes;
+ (id)readableTypesForPasteboard:(id)a0;
+ (unsigned long long)readingOptionsForType:(id)a0 pasteboard:(id)a1;

- (void)dealloc;
- (void)_setPasteboard:(id)a0;
- (BOOL)providerIsUsingFileCoordination;
- (void)_setPasteboardItem:(id)a0;
- (void)draggingCancelled:(id)a0;
- (void)draggingEnded:(id)a0;
- (id)initWithPasteboardPropertyList:(id)a0 ofType:(id)a1;
- (void)receivePromisedFilesAtDestination:(id)a0 options:(id)a1 operationQueue:(id)a2 reader:(id /* block */)a3;
- (void)registerDesinationLocation:(id)a0 options:(id)a1 operationQueu:(id)a2 reader:(id /* block */)a3;
- (void)registerDestinationLocation:(id)a0 options:(id)a1 operationQueue:(id)a2 reader:(id /* block */)a3;

@end
