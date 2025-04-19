@class NSMutableDictionary, NSMutableIndexSet, NSArray, NSObject, SMMigrationRequest;
@protocol OS_dispatch_queue;

@interface SMUIDGIDTranslator : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableDictionary *uidTranslationTable;
@property (retain) NSMutableDictionary *gidTranslationTable;
@property (retain) NSObject<OS_dispatch_queue> *tableAccessQueue;
@property (retain) NSMutableIndexSet *existingUIDs;
@property (retain) NSMutableIndexSet *existingGIDs;
@property (retain) SMMigrationRequest *migrationRequest;
@property (retain) NSArray *overwriteUsernames;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)sanityCheck;
- (void)deletedUIDFromSystem:(unsigned int)a0;
- (void)initializeExistingIDs;
- (BOOL)translatedUID:(unsigned int *)a0 andGID:(unsigned int *)a1 forOldUID:(unsigned int)a2 andOldGID:(unsigned int)a3;
- (BOOL)translatedUID:(unsigned int *)a0 andGID:(unsigned int *)a1 forOldUID:(unsigned int)a2 andOldGID:(unsigned int)a3 ofType:(long long)a4;

@end
