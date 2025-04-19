@class NSPersistentHistoryToken;
@protocol STPersistenceControllerProtocol;

@interface STUnique : NSObject {
    NSPersistentHistoryToken *_migratedToken;
}

@property (retain, nonatomic) id<STPersistenceControllerProtocol> persistenceController;

+ (Class)_internalClassForSerializableClassName:(id)a0;
+ (BOOL)_updateScreenTimeSettingsForAppAndWebsiteActivityEnabled:(BOOL)a0 inContext:(id)a1 error:(id *)a2;
+ (BOOL)addHistoryToken:(id)a0 toMetadataForStore:(id)a1 error:(id *)a2;
+ (id)cloudToLocalMapping;
+ (id)historyTokenFromStore:(id)a0;
+ (id)localToCloudMapping;
+ (id)mirroredEntityNames;

- (void).cxx_destruct;
- (BOOL)migrateWithError:(id *)a0;
- (BOOL)addHistoryToken:(id)a0 toMetadataForStore:(id)a1 error:(id *)a2;
- (BOOL)areLocalChangesInterestingWithError:(id *)a0;
- (id)historyTokenFromStore:(id)a0;
- (id)initWithPersistenceController:(id)a0;
- (BOOL)migrateWithExportNeeded:(BOOL *)a0 error:(id *)a1;
- (void)newResolveConflictsBetweenLocalDeltas:(id)a0 cloudDeltas:(id)a1;
- (void)resolveConflictsBetweenLocalDeltas:(id)a0 cloudDeltas:(id)a1;

@end
