@class NSNumber;

@interface DGDefinition2Operation : DGOperation

@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0;
- (BOOL)isMigratable;

@end
