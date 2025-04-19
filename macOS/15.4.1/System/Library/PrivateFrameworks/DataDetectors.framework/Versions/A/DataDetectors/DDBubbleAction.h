@interface DDBubbleAction : DDMacAction

- (BOOL)displaysUI;
- (id)initWithDict:(id)a0 bundle:(id)a1;
- (id)menuItemForResult:(struct __DDResult { } *)a0 textCheckingResult:(id)a1 URL:(id)a2 uiReady:(BOOL)a3 context:(id)a4 actionTarget:(id)a5;
- (BOOL)runForResult:(struct __DDResult { } *)a0 context:(id)a1;
- (BOOL)runForResult:(struct __DDResult { } *)a0 textCheckingResult:(id)a1 URL:(id)a2 context:(id)a3;
- (BOOL)runForTextCheckingResult:(id)a0 context:(id)a1;
- (BOOL)runForURL:(id)a0 context:(id)a1;

@end
