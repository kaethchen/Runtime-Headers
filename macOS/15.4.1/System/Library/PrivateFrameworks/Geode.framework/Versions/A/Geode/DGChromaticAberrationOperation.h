@class NSNumber;

@interface DGChromaticAberrationOperation : DGOperation

@property (copy, nonatomic) NSNumber *inputRedCyan;
@property (copy, nonatomic) NSNumber *inputBlueYellow;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void)dealloc;
- (id)init;
- (id)initWithOperation:(id)a0;
- (id)_filter;
- (BOOL)allowDough;
- (BOOL)needsInputImageWithoutGeometry;

@end
