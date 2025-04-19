@interface ABGroupListCellViewStyle : NSObject

+ (void)updateAppearanceOfTextField:(id)a0 withRowView:(id)a1 ofType:(unsigned long long)a2;
+ (unsigned long long)colorTypeForState:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a0;
+ (id)convertFont:(id)a0 forColorType:(unsigned long long)a1;
+ (void)setColor:(id)a0 font:(id)a1 onTextField:(id)a2;
+ (id)textColorForColorType:(unsigned long long)a0;
+ (BOOL)textFieldHasFieldEditor:(id)a0;
+ (void)updateTextField:(id)a0 withColorType:(unsigned long long)a1 state:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a2;

@end
