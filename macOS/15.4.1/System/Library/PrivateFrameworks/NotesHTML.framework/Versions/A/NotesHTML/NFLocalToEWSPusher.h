@class NSString;

@interface NFLocalToEWSPusher : NSObject <NFLocalToRemotePusherProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const char *)logCategory;

- (BOOL)_addFolderToRemote:(id)a0 inParent:(id)a1 accountProxy:(id)a2 responseCode:(long long *)a3;
- (BOOL)_addNoteToRemote:(id)a0 inFolder:(id)a1 accountProxy:(id)a2 responseCode:(long long *)a3;
- (BOOL)_deleteNoteFromRemoteWithId:(id)a0 accountProxy:(id)a1 responseCode:(long long *)a2;
- (BOOL)addFolderToRemote:(id)a0 inParent:(id)a1 accountProxy:(id)a2 errorIsFatal:(BOOL *)a3;
- (BOOL)addNoteToRemote:(id)a0 inFolder:(id)a1 accountProxy:(id)a2 errorIsFatal:(BOOL *)a3;
- (BOOL)deleteFolderFromRemote:(id)a0 fromParent:(id)a1 accountProxy:(id)a2 errorIsFatal:(BOOL *)a3;
- (BOOL)deleteNoteFromRemoteWithID:(id)a0 fromFolder:(id)a1 accountProxy:(id)a2 errorIsFatal:(BOOL *)a3;
- (BOOL)moveFolderOnRemote:(id)a0 toParent:(id)a1 originalParent:(id)a2 accountProxy:(id)a3 errorIsFatal:(BOOL *)a4;
- (BOOL)moveNoteOnRemote:(id)a0 toFolder:(id)a1 originalFolder:(id)a2 accountProxy:(id)a3 errorIsFatal:(BOOL *)a4;
- (BOOL)updateFolderOnRemote:(id)a0 inParent:(id)a1 accountProxy:(id)a2 errorIsFatal:(BOOL *)a3;
- (BOOL)updateNoteOnRemote:(id)a0 inFolder:(id)a1 accountProxy:(id)a2 errorIsFatal:(BOOL *)a3;

@end
