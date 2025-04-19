@interface DDFacetimeController : DDDialController

+ (BOOL)audio;
+ (BOOL)actionValidForDataDetectorsResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;
+ (BOOL)prepareMenuItem:(id)a0 result:(struct __DDResult { } *)a1 url:(id)a2 textCheckingResult:(id)a3 context:(id)a4;

- (void)runForItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
