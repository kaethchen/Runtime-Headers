@class NSNumber;

@interface DGGNGDodgeOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputExposure;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void)dealloc;
- (id)init;
- (id)initWithOperation:(id)a0;
- (id)_filter;

@end
