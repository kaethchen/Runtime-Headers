@class NSObject, SYNotesActivationRequest;
@protocol OS_dispatch_queue;

@interface SYNotesActivationCommand : NSObject {
    NSObject<OS_dispatch_queue> *__dataLoadingQueue;
}

@property (retain, nonatomic) SYNotesActivationRequest *activationRequest;

+ (void)activateWithDomainIdentifier:(id)a0 noteIdentifier:(id)a1 completion:(id /* block */)a2;
+ (void)activateWithMetaActivity:(id)a0 completion:(id /* block */)a1;
+ (void)activateWithNoteIdentifier:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_loadDataFromFileURLs:(id)a0 withCompletion:(id /* block */)a1;

@end
