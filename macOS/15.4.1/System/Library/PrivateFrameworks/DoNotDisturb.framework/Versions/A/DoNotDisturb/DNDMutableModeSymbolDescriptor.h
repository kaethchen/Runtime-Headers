@class NSArray, NSString;

@interface DNDMutableModeSymbolDescriptor : DNDModeSymbolDescriptor

@property (copy) NSArray *tintColorNames;
@property unsigned long long tintStyle;
@property (copy) NSString *imageName;

- (void)setImageName:(id)a0;
- (void)setTintStyle:(unsigned long long)a0;
- (id)initWithTintStyle:(unsigned long long)a0 tintColorNames:(id)a1 imageName:(id)a2;
- (void)setTintColorNames:(id)a0;

@end
