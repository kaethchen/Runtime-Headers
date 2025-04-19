@interface DSMigrator : NSObject

+ (id)allRecordsForSystem:(id)a0;
+ (BOOL)copyAllDSRecords:(id)a0 fromSourceSystem:(id)a1 toSystem:(id)a2 andCommitChanges:(BOOL)a3 andVerbose:(BOOL)a4;
+ (BOOL)copyAllDSRecords:(id)a0 fromSourceSystem:(id)a1 toSystem:(id)a2 mergeAttributes:(id)a3 andCommitChanges:(BOOL)a4 andVerbose:(BOOL)a5;
+ (BOOL)copyHashPassword:(id)a0 fromSystem:(id)a1 toSystem:(id)a2;

@end
