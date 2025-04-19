@class NSMutableDictionary;

@interface NSDocumentControllerPersistentRestoration : NSObject {
    NSMutableDictionary *_autoIDToDocumentOrNSNull;
    NSMutableDictionary *_autoIDToWaiters;
}

- (id)init;
- (void).cxx_destruct;
- (void)loadedDocument:(id)a0 forAutoID:(unsigned int)a1;
- (BOOL)waitForDocumentWithAutoID:(unsigned int)a0 thenDo:(id /* block */)a1;
- (void)windowsDidFinishRestoring;

@end
