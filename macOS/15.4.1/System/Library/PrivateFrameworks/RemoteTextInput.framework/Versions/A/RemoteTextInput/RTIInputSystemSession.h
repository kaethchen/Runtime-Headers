@class NSUUID, RTIDocumentState, NSHashTable, RTIDocumentTraits, RTITextOperations, RTISessionOptions;
@protocol RTIInputSystemSessionDelegate;

@interface RTIInputSystemSession : NSObject

@property (retain, nonatomic) NSHashTable *extraSessionDelegates;
@property (retain) NSUUID *uuid;
@property (retain, nonatomic) RTISessionOptions *beginOptions;
@property (retain, nonatomic) RTIDocumentTraits *documentTraits;
@property (retain, nonatomic) RTIDocumentState *documentState;
@property (retain, nonatomic) RTITextOperations *textOperations;
@property (readonly, nonatomic) RTITextOperations *_textOperations;
@property (weak, nonatomic) id<RTIInputSystemSessionDelegate> sessionDelegate;

- (void).cxx_destruct;
- (void)flushOperations;
- (void)uuidSafeAccess:(id /* block */)a0;
- (id)documentStateAfterModifyAndFlushTextOperations:(id /* block */)a0;
- (void)documentStateSafeAccess:(id /* block */)a0;
- (void)documentTraitsSafeAccess:(id /* block */)a0;
- (void)modifyAndFlushTextOperations:(id /* block */)a0 resultHandler:(id /* block */)a1;
- (void)textOperationsSafeAccess:(id /* block */)a0;
- (void)_applyLocalTextOperations:(id)a0 toDocumentState:(id)a1;
- (void)_createTextOperationsIfNecessary;
- (void)addSessionDelegate:(id)a0;
- (void)applyLocalTextOperations:(id)a0 toDocumentState:(id)a1;
- (void)beginOptionsSafeAccess:(id /* block */)a0;
- (id)documentStateAfterModifyAndFlushTextOperations:(id /* block */)a0 resultHandler:(id /* block */)a1;
- (void)enumerateSessionDelegatesUsingBlock:(id /* block */)a0;
- (void)modifyAndFlushTextOperations:(id /* block */)a0;
- (void)removeSessionDelegate:(id)a0;

@end
