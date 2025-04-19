@class NSOperationQueue, NSString;

@interface PHPasteboardItemManager : NSObject <NSFilePromiseProviderDelegate> {
    NSOperationQueue *_exportOperationQueue;
}

@property (readonly, nonatomic) NSOperationQueue *exportOperationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pasteboardItemsForObject:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)filePromiseProvider:(id)a0 fileNameForType:(id)a1;
- (void)filePromiseProvider:(id)a0 writePromiseToURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)operationQueueForFilePromiseProvider:(id)a0;
- (id)filePromiseProvidersForObject:(id)a0 error:(id *)a1;

@end
