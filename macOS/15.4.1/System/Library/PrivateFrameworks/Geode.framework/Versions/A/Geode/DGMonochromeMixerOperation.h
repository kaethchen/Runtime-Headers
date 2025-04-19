@interface DGMonochromeMixerOperation : DGOperation

@property (nonatomic) long long inputType;
@property (nonatomic) double inputRValue;
@property (nonatomic) double inputGValue;
@property (nonatomic) double inputBValue;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)init;
- (void)setNilValueForKey:(id)a0;
- (id)initWithOperation:(id)a0;

@end
