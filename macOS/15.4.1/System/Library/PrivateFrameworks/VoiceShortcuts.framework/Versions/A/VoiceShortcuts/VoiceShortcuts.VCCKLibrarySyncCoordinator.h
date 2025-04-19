@interface VoiceShortcuts.VCCKLibrarySyncCoordinator : NSObject

+ (BOOL)handleFetchedLibraryRecord:(id)a0 database:(id)a1 logger:(id)a2 error:(id *)a3;
+ (BOOL)handleSavedLibraryRecord:(id)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)handleServerRecordChangedErrorForRecord:(id)a0 database:(id)a1 logger:(id)a2 error:(id *)a3;
+ (BOOL)handleUnknownItemErrorForRecord:(id)a0 database:(id)a1 error:(id *)a2;

- (id)init;

@end
