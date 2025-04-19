@interface LULookupDefinitionModule : NSObject <NSDefinitionExternalModule>

+ (void)focusTermUsingQueue:(id)a0 handler:(id /* block */)a1;
+ (void)showDefinitionForTerm:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 options:(id)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })tokenRangeForString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(id *)a2;
+ (void)hideDefinition;
+ (id)lookupAnimationControllerForTerm:(id)a0 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 options:(id)a3;
+ (void)_focusTermUsingQueue:(id)a0 handler:(id /* block */)a1;
+ (void)_showDefinitionForTerm:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 options:(id)a2;
+ (id)_termWithOrigin:(struct CGPoint { double x0; double x1; } *)a0 options:(id *)a1 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inString:(id)a3 withOptions:(id)a4 originProvider:(id /* block */)a5 inView:(id)a6;
+ (id)lookupAnimationControllerForTerm:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 options:(id)a2;
+ (id)optionDictionaryWithOptions:(id)a0 key:(id)a1 value:(id)a2 force:(BOOL)a3;
+ (void)showDefinitionForTerm:(id)a0 relativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 options:(id)a3;

- (id)lookupAnimationControllerForString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(id)a2 originProvider:(void *)a3 inView:(id)a4;
- (void)showDefinitionByHotKey;
- (void)showDefinitionForString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(id)a2 originProvider:(void *)a3 inView:(id)a4;

@end
