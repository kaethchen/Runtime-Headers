@interface _TtC7SwiftUIP33_0BC2519238CC4854E8BA774CC855AC9A22PasteboardDataProvider : NSObject <NSFilePromiseProviderDelegate, NSPasteboardItemDataProvider> {
    void /* unknown type, empty encoding */ itemProvider;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ additionalStorage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_operationQueue;
    void /* unknown type, empty encoding */ temporaryDirectory;
}

- (id)init;
- (void).cxx_destruct;
- (id)filePromiseProvider:(id)a0 fileNameForType:(id)a1;
- (void)filePromiseProvider:(id)a0 writePromiseToURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)operationQueueForFilePromiseProvider:(id)a0;
- (void)pasteboard:(id)a0 item:(id)a1 provideDataForType:(id)a2;
- (void)pasteboardFinishedWithDataProvider:(id)a0;

@end
