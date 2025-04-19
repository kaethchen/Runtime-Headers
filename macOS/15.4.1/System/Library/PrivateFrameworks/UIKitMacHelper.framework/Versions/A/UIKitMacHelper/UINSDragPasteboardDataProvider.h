@class NSMutableDictionary, NSDictionary, NSString, UINSDragItem;
@protocol UINSDragSessionHandler;

@interface UINSDragPasteboardDataProvider : NSObject <NSFilePromiseProviderDelegate, NSPasteboardItemDataProvider>

@property (retain) UINSDragItem *item;
@property long long index;
@property (retain) id<UINSDragSessionHandler> handler;
@property (retain) NSDictionary *mappedTypes;
@property (retain) NSMutableDictionary *additionalData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pasteboardWriterForItem:(id)a0 index:(long long)a1 handler:(id)a2;

- (void).cxx_destruct;
- (id)filePromiseProvider:(id)a0 fileNameForType:(id)a1;
- (void)filePromiseProvider:(id)a0 writePromiseToURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)operationQueueForFilePromiseProvider:(id)a0;
- (void)pasteboard:(id)a0 item:(id)a1 provideDataForType:(id)a2;
- (void)pasteboardFinishedWithDataProvider:(id)a0;
- (void)addData:(id)a0 forType:(id)a1;
- (id)initWithItem:(id)a0 index:(long long)a1 handler:(id)a2 mappedTypes:(id)a3;

@end
