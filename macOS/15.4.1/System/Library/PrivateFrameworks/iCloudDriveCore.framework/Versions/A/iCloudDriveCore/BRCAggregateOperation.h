@class NSString, NSArray, NSMutableDictionary;

@interface BRCAggregateOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    NSArray *_subOperations;
    NSMutableDictionary *_resultDictionary;
}

@property (copy, nonatomic) id /* block */ wrapperOperationCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (BOOL)shouldRetryForError:(id)a0;
- (id)initWithSyncContext:(id)a0 sessionContext:(id)a1 subOperations:(id)a2;

@end
