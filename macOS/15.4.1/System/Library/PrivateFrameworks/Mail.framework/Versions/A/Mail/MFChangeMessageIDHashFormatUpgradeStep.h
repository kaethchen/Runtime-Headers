@class NSArray;

@interface MFChangeMessageIDHashFormatUpgradeStep : MFLibraryUpgradeStep

@property (readonly, copy, nonatomic) NSArray *accounts;

+ (unsigned long long)targetVersion;
+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)a0 initialLastWriteMinorVersion:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithDatabaseConnection:(id)a0;
- (void)_alterTable:(id)a0 columnDefinitions:(id)a1 columnList:(id)a2;
- (BOOL)_columnIsInteger:(id)a0 inTable:(id)a1;
- (id)initWithDatabaseConnection:(id)a0 accounts:(id)a1;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
