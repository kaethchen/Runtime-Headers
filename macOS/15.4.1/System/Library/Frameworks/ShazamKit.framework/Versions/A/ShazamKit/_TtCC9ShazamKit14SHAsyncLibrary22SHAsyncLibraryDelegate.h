@interface _TtCC9ShazamKit14SHAsyncLibrary22SHAsyncLibraryDelegate : NSObject <SHMediaLibrarySyncDelegate> {
    void /* unknown type, empty encoding */ updatesContinuation;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ inflightItems;
}

- (id)init;
- (void).cxx_destruct;
- (void)_library:(id)a0 didChangeWithSnapshot:(id)a1;
- (void)_library:(id)a0 didProduceError:(id)a1 failedItemIdentifiers:(id)a2;
- (void)_libraryDidCompleteSync:(id)a0;
- (void)_libraryWillBeginSync:(id)a0;

@end
