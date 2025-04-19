@class NSString, NSMutableDictionary;
@protocol SHMediaLibrarySyncDelegate;

@interface _SHMediaLibrary : NSObject <SHMediaLibrarySyncDelegate, SHRemoteMediaLibrary>

@property (class, readonly) _SHMediaLibrary *_defaultLibrary;

@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } inflightTasksLock;
@property (retain) NSMutableDictionary *inflightTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<SHMediaLibrarySyncDelegate> delegate;

+ (id)_localizedAttributionForLibraryItem:(id)a0;
+ (void)_presentMediaLibraryWithCompletionHandler:(id /* block */)a0;
+ (id)sh_uiServerConnection;

- (id)init;
- (void).cxx_destruct;
- (void)_synchronize;
- (void)_library:(id)a0 didChangeWithSnapshot:(id)a1;
- (void)_addMediaItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)_library:(id)a0 didProduceError:(id)a1 failedItemIdentifiers:(id)a2;
- (void)_libraryDidCompleteSync:(id)a0;
- (void)_libraryInfoWithCompletionHandler:(id /* block */)a0;
- (void)_libraryInfoWithTask:(id)a0 completionHandler:(id /* block */)a1;
- (void)_libraryWillBeginSync:(id)a0;
- (void)_queryLibraryWithCompletionHandler:(id /* block */)a0;
- (void)_queryLibraryWithParameters:(id)a0 completionHandler:(id /* block */)a1;
- (void)_queryLibraryWithTask:(id)a0 parameters:(id)a1 completionHandler:(id /* block */)a2;
- (void)_synchronizeSnapshot:(id)a0 startCondition:(id)a1;
- (void)_synchronizeSnapshot:(id)a0 startCondition:(id)a1 completionHandler:(id /* block */)a2;
- (void)_synchronizeTask:(id)a0 snapshot:(id)a1 startCondition:(id)a2 completionHandler:(id /* block */)a3;
- (void)addInflightTask:(id)a0;
- (void)librarySyncDidChange:(id)a0;
- (void)removeInflightTask:(id)a0;

@end
