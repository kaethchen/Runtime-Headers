@class NSString, NSMutableSet, NSObject, BKAgent;
@protocol OS_dispatch_queue;

@interface BKAgentServiceDelegate : NSObject <BKAgentServiceDelegate> {
    NSMutableSet *_listeners;
    NSMutableSet *_persistenceListeners;
}

@property (readonly) NSObject<OS_dispatch_queue> *lock;
@property (nonatomic) BKAgent *agent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addBookLibrarySaveListener:(id /* block */)a0;
- (void)addChangeListener:(id /* block */)a0;
- (void)bookLibraryDidAttemptSave:(BOOL)a0 error:(id)a1;
- (void)bookLibraryUpdated:(id)a0;
- (void)bookMetadata:(id)a0 changed:(long long)a1;
- (void)removeBookLibrarySaveListener:(id /* block */)a0;
- (void)removeChangeListener:(id /* block */)a0;

@end
