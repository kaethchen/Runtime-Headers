@class NSArray, NSString, NSURL, NSOperationQueue;
@protocol NSFilePromiseProviderDelegate;

@interface NSFilePromiseProvider : NSObject <NSFileProvider, _NSPasteboardPromiseProviderAgency, NSFilePromiseCompletionTarget, NSPasteboardWriting_Private, NSPasteboardItemDataProvider_Private, NSPasteboardWriting> {
    NSString *_fileType;
    id _reservedB;
    id<NSFilePromiseProviderDelegate> _strongDelegate;
    NSURL *_destinationURL;
    struct { unsigned int valid; unsigned char providedItem : 1; unsigned int reserved : 30; } _flags;
}

@property (readonly, nonatomic) id private;
@property (copy) NSArray *alternateFileTypes;
@property (copy) NSString *fileType;
@property (weak) id<NSFilePromiseProviderDelegate> delegate;
@property (retain) id userInfo;
@property (readonly, copy) NSURL *_providedItemsURL;
@property (readonly) NSOperationQueue *_providedItemsOperationQueue;
@property (readonly, copy) NSString *_fileReactorID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_provideItemNotifyQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_provideItemAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_provideItemAtURL:(id)a0 toReaderWithID:(id)a1 completionHandler:(id /* block */)a2;
- (id)_destinationURL;
- (void)_cancel;
- (void)_coordinatelyWritePromiseToURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)_dataProviderForType:(id)a0;
- (id)_fileNameForType:(id)a0;
- (void)_pasteboard:(id)a0 item:(id)a1 provideDataForType:(id)a2 completionHandler:(id /* block */)a3;
- (void)_pasteboardPropertyListForType:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setDestinationURL:(id)a0;
- (void)_strongifyDelegate;
- (void)draggingCancelled:(id)a0;
- (void)draggingEnded:(id)a0;
- (id)initWithFileType:(id)a0 delegate:(id)a1;
- (void)pasteboard:(id)a0 item:(id)a1 provideDataForType:(id)a2;
- (void)pasteboardFinishedWithDataProvider:(id)a0;
- (id)pasteboardPropertyListForType:(id)a0;
- (BOOL)setData:(id)a0 forType:(id)a1;
- (BOOL)setDataProvider:(id)a0 forTypes:(id)a1;
- (BOOL)setPropertyList:(id)a0 forType:(id)a1;
- (BOOL)setString:(id)a0 forType:(id)a1;
- (id)writableTypesForPasteboard:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;

@end
