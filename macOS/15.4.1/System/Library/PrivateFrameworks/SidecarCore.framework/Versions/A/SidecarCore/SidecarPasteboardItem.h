@class NSString, SidecarService, NSOperationQueue, SidecarItem, NSFilePromiseProvider;

@interface SidecarPasteboardItem : NSObject <NSFilePromiseProviderDelegate, NSPasteboardWriting, NSPasteboardItemDataProvider> {
    SidecarItem *_item;
    NSFilePromiseProvider *_promise;
    NSOperationQueue *_queue;
    SidecarService *_service;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)filePromiseProvider:(id)a0 fileNameForType:(id)a1;
- (void)filePromiseProvider:(id)a0 writePromiseToURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)operationQueueForFilePromiseProvider:(id)a0;
- (void)pasteboard:(id)a0 item:(id)a1 provideDataForType:(id)a2;
- (void)pasteboardFinishedWithDataProvider:(id)a0;
- (id)pasteboardPropertyListForType:(id)a0;
- (id)writableTypesForPasteboard:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;
- (id)initWithItem:(id)a0 fromService:(id)a1;

@end
