@interface NFOfflineActionManager : NSObject

+ (void)executeOfflineActionsForAccount:(id)a0;
+ (void)_copyFolderContentsToRecoveredItemsFolder:(id)a0;
+ (void)_copyNoteToRecoveredItemsFolder:(id)a0;
+ (BOOL)_executeActionForAccount:(id)a0 action:(id)a1 outError:(long long *)a2;
+ (BOOL)_executeInsertFolderAction:(id)a0 forAccount:(id)a1 outError:(long long *)a2;
+ (BOOL)_executeInsertNoteAction:(id)a0 forAccount:(id)a1 outError:(long long *)a2;
+ (BOOL)_executeMoveFolderAction:(id)a0 forAccount:(id)a1 outError:(long long *)a2;
+ (BOOL)_executeMoveNoteAction:(id)a0 forAccount:(id)a1 outError:(long long *)a2;
+ (BOOL)_executeUpdateFolderAction:(id)a0 forAccount:(id)a1 outError:(long long *)a2;
+ (BOOL)_executeUpdateNoteAction:(id)a0 forAccount:(id)a1 outError:(long long *)a2;
+ (void)_recoverFromInvalidAction:(id)a0;

@end
