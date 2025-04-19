@interface ABPersonListAttributedName : NSObject

+ (id)attributedStringForName:(id)a0 emphasisRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)attributedStringForName:(id)a0 emphasisRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withForegroundColor:(id)a2;
+ (id)boldFont;
+ (id)darkAttributedStringForName:(id)a0 emphasisRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)italicFont;
+ (id)noNameStringWithForegroundColor:(id)a0;
+ (id)normalFont;
+ (BOOL)shouldEmphasizeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofName:(id)a1;

@end
