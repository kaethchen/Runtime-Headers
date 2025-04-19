@class NSString, _SHMediaLibrary;
@protocol SHMediaLibrarySyncDelegate;

@interface SHMediaLibrary : NSObject <SHMediaLibrarySyncDelegate, SHMediaLibrary>

@property (class, readonly) SHMediaLibrary *defaultLibrary;

@property (retain) _SHMediaLibrary *underlyingLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<SHMediaLibrarySyncDelegate> delegate;

- (void).cxx_destruct;
- (id)_init;
- (void)_synchronize;
- (void)addMediaItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)_library:(id)a0 didChangeWithSnapshot:(id)a1;
- (void)_library:(id)a0 didProduceError:(id)a1 failedItemIdentifiers:(id)a2;
- (void)_libraryDidCompleteSync:(id)a0;
- (void)_libraryInfoWithCompletionHandler:(id /* block */)a0;
- (void)_libraryWillBeginSync:(id)a0;
- (void)_queryLibraryWithCompletionHandler:(id /* block */)a0;
- (void)_queryLibraryWithParameters:(id)a0 completionHandler:(id /* block */)a1;
- (void)_synchronizeSnapshot:(id)a0 startCondition:(id)a1;

@end
