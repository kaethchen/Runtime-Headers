@class NSColor, NSNumber;

@interface DGColorMonochromeOperation : DGOperation

@property (copy, nonatomic) NSColor *inputColor;
@property (copy, nonatomic) NSNumber *inputIntensity;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (void)dealloc;
- (id)init;
- (id)initWithOperation:(id)a0;
- (id)_filter;

@end
