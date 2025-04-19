@class NSString;

@interface ViewSpyInfoKeyItem : ViewSpyInfoItem

@property (copy, nonatomic) NSString *keyName;
@property (nonatomic) long long keyType;
@property (nonatomic) BOOL settable;
@property (weak, nonatomic) id userData;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)itemType;
- (id)currentColorSpaceNameForObject:(id)a0;
- (id)currentColorIfAvailableForObject:(id)a0;
- (id)currentColorNameForObject:(id)a0;
- (id)currentObjectValueIfAvailableForObject:(id)a0;
- (void)setFloatValue:(double)a0 forObject:(id)a1;
- (void)setIntegerValue:(long long)a0 forObject:(id)a1;
- (BOOL)setKey:(id)a0 onObject:(id)a1;
- (void)setStringValue:(id)a0 forObject:(id)a1;
- (void)setTextFromCurrentValueOfObject:(id)a0;
- (void)toggleBoolValueForObject:(id)a0;

@end
