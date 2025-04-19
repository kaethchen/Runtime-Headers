@interface SwiftData.ModelContext : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _container;
    void /* unknown type, empty encoding */ _mainContainer;
    void /* unknown type, empty encoding */ _runLoopObserver;
    void /* unknown type, empty encoding */ undoManager;
    void /* unknown type, empty encoding */ _hasChanges;
    void /* unknown type, empty encoding */ _hasUnprocessedInserts;
    void /* unknown type, empty encoding */ _unprocessedChangesPending;
    void /* unknown type, empty encoding */ _hasUnprocessedDeletes;
    void /* unknown type, empty encoding */ _hasInserts;
    void /* unknown type, empty encoding */ _hasUpdates;
    void /* unknown type, empty encoding */ _hasDeletes;
    void /* unknown type, empty encoding */ _exhaustiveValidation;
    void /* unknown type, empty encoding */ _propagatesDeletesAtEndOfEvent;
    void /* unknown type, empty encoding */ _generatedMutatedIDsNotification;
    void /* unknown type, empty encoding */ _registeredForCallback;
    void /* unknown type, empty encoding */ _processingChanges;
    void /* unknown type, empty encoding */ _ignoreUndoCheckpoints;
    void /* unknown type, empty encoding */ _propagatingDeletes;
    void /* unknown type, empty encoding */ _isUIContext;
    void /* unknown type, empty encoding */ _tombstonedObjectIDs;
    void /* unknown type, empty encoding */ _insertedObjects;
    void /* unknown type, empty encoding */ _unprocessedInserts;
    void /* unknown type, empty encoding */ _changedObjects;
    void /* unknown type, empty encoding */ _unprocessedChanges;
    void /* unknown type, empty encoding */ _deletedObjects;
    void /* unknown type, empty encoding */ _unprocessedDeletes;
    void /* unknown type, empty encoding */ _refreshedObjects;
    void /* unknown type, empty encoding */ _lockedObjects;
    void /* unknown type, empty encoding */ _deferredInsertsPendingNotification;
    void /* unknown type, empty encoding */ _deferredMergeChangesNotification;
    void /* unknown type, empty encoding */ _pendingRelationshipLinks;
    void /* unknown type, empty encoding */ _undoTransactionID;
    void /* unknown type, empty encoding */ _registeredUndoTransactionID;
    void /* unknown type, empty encoding */ _ignoreChangeNotification;
    void /* unknown type, empty encoding */ editingState;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ hasAutosaveObservers;
    void /* unknown type, empty encoding */ AUTOSAVE_MAX_TIME;
    void /* unknown type, empty encoding */ contextChanged;
    void /* unknown type, empty encoding */ autosaveDelay;
    void /* unknown type, empty encoding */ _allowTemporaryLookup;
    void /* unknown type, empty encoding */ autosaveEnabled;
    void /* unknown type, empty encoding */ _objectRegistration;
}

- (void)_undoDeletions:(id)a0;
- (void)_clearChangedThisTransaction:(id)a0;
- (void)_undoDeletionsMovedToUpdates:(id)a0;
- (void)_undoInsertions:(id)a0;
- (void)_undoManagerCheckpoint:(id)a0;
- (void)_undoUpdates:(id)a0;
- (void)_processChangedManagedObjectIDs:(id)a0;
- (void)autosave;
- (void)checkAutosaveConditions;

@end
