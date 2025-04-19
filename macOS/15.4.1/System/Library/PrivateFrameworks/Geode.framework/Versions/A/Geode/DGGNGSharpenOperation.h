@class NSNumber;

@interface DGGNGSharpenOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputSharpness;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void)dealloc;
- (id)init;
- (id)initWithOperation:(id)a0;

@end
