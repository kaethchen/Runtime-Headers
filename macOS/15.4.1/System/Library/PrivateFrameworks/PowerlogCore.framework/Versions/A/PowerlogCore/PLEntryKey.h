@class NSString;

@interface PLEntryKey : NSObject

@property (copy, nonatomic) NSString *wildCardName;
@property (nonatomic) BOOL isDynamic;
@property (nonatomic) struct _PLTimeIntervalRange { double location; double length; } timeIntervalRange;
@property (weak) PLEntryKey *baseEntryKey;
@property (readonly, retain) NSString *entryKey;
@property (readonly, retain) NSString *operatorName;
@property (readonly, retain) Class operatorClass;
@property (readonly, retain) NSString *entryType;
@property (readonly, retain) NSString *entryName;

+ (id)PLEntryAggregateKeysForOperator:(id)a0;
+ (id)PLEntryAggregateKeysForOperatorName:(id)a0;
+ (id)PLEntryKeyForOperatorName:(id)a0 withType:(id)a1 withName:(id)a2;
+ (id)PLEntryKeyStringsForTasking;
+ (id)PLEntryKeysForEntryType:(id)a0;
+ (id)PLEntryAggregateKeysForOperatorClass:(Class)a0;
+ (id)PLEntryKeyForEntryKey:(id)a0;
+ (id)PLEntryKeyForOperatorName:(id)a0 withType:(id)a1 withName:(id)a2 withWildCardName:(id)a3 isDynamic:(BOOL)a4;
+ (void)PLEntryKeyStringsForTaskingReset;
+ (void)addPLEntryKey:(id)a0;
+ (void)addPLEntryKeyStringToTasking:(id)a0;
+ (id)baseEntryKeyForEntryKey:(id)a0;
+ (id)dynamicEntryKeyForEntryKey:(id)a0;
+ (id)entryKeyForOperatorName:(id)a0 withType:(id)a1 withName:(id)a2;
+ (id)entryKeyForOperatorName:(id)a0 withType:(id)a1 withName:(id)a2 isDynamic:(BOOL)a3;
+ (id)entryKeyForOperatorName:(id)a0 withType:(id)a1 withName:(id)a2 withWildCardName:(id)a3;
+ (id)entryKeyForOperatorName:(id)a0 withType:(id)a1 withName:(id)a2 withWildCardName:(id)a3 isDynamic:(BOOL)a4;
+ (id)entryKeyStringForOperatorName:(id)a0 withType:(id)a1 withName:(id)a2;
+ (id)entryKeysForOperator:(id)a0;
+ (id)entryKeysForOperatorClass:(Class)a0;
+ (id)entryKeysForOperatorName:(id)a0;
+ (id)entryKeysForOperatorNameCopy:(id)a0;
+ (BOOL)isEntryKeySetup:(id)a0 forOperatorName:(id)a1;
+ (Class)operatorClassForEntryKey:(id)a0;
+ (id)operatorNameForEntryKey:(id)a0;
+ (void)setupEntryObjectsForOperatorClass:(Class)a0;
+ (BOOL)shouldConfigureAdditionalTable:(id)a0 withType:(id)a1 withName:(id)a2;
+ (BOOL)shouldConfigureTable:(id)a0 withType:(id)a1 withName:(id)a2 withConfigs:(id)a3;
+ (struct _PLTimeIntervalRange { double x0; double x1; })timeIntervalRangeForEntryKey:(id)a0;
+ (id)timeintervalRangeEntryKeyForEntryKey:(id)a0 withTimeIntervalRange:(struct _PLTimeIntervalRange { double x0; double x1; })a1;
+ (id)wildCardForEntryKey:(id)a0;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithIsDynamic:(BOOL)a0;
- (id)copyWithTimeIntervalRange:(struct _PLTimeIntervalRange { double x0; double x1; })a0;
- (id)copyWithWildCardName:(id)a0;
- (id)initWithOperatorName:(id)a0 withEntryType:(id)a1 withEntryName:(id)a2;

@end
