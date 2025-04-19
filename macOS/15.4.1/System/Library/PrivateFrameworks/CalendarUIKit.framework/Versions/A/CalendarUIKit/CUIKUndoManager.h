@class NSMutableDictionary, NSUndoManager, NSString, NSError;
@protocol CUIKCommitDelegate, CUIKDecisionDelegate, CUIKEditorExtended;

@interface CUIKUndoManager : NSUndoManager <CUIKUndoDelegate>

@property (retain, nonatomic) NSMutableDictionary *undeletedObjectMap;
@property (retain, nonatomic) NSMutableDictionary *specificIdentifierMapForUndo;
@property (retain, nonatomic) NSMutableDictionary *specificIdentifierMapForRevert;
@property (retain, nonatomic) id<CUIKCommitDelegate> commitDelegate;
@property (retain, nonatomic) id<CUIKDecisionDelegate> decisionDelegate;
@property (copy, nonatomic) id /* block */ editingManagerProvider;
@property (retain, nonatomic) id<CUIKEditorExtended> undoableEditor;
@property (retain, nonatomic) NSError *lastError;
@property BOOL disableUndoForOrganizerScheduling;
@property (readonly, nonatomic) NSUndoManager *systemUndoManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationForAction:(unsigned long long)a0 context:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)removeAllActions;
- (void)_clearUndeletedObjects;
- (void)_registerUndeletedObject:(id)a0 withOriginalObjectID:(id)a1;
- (void)clearUndoOperations;
- (void)handleUndoForOperation:(id)a0;
- (id)objectToSaveForRevertingChangeToObject:(id)a0;
- (id)objectToSaveForUndoingChangeToObject:(id)a0;
- (void)objectWithSpecificIdentifierWasReverted:(id)a0;
- (void)setRevertObject:(id)a0 forSpecificIdentifier:(id)a1;
- (void)setUndoObject:(id)a0 forSpecificIdentifier:(id)a1;
- (void)undoOperation:(id)a0;

@end
