@class DDPhoneNumber;

@interface DDDialController : NSObject <DDMiscActionProtocol> {
    DDPhoneNumber *_number;
}

+ (BOOL)requiresService;
+ (BOOL)actionValidForDataDetectorsResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;
+ (BOOL)displaysNonModalUI;
+ (BOOL)prepareMenuItem:(id)a0 result:(struct __DDResult { } *)a1 url:(id)a2 textCheckingResult:(id)a3 context:(id)a4;
+ (BOOL)requiresViewBridge;
+ (id)runActionWithResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;

- (void).cxx_destruct;
- (id)number;
- (id)initWithPhoneNumber:(id)a0;
- (void)callURL:(id)a0;
- (void)runForItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
