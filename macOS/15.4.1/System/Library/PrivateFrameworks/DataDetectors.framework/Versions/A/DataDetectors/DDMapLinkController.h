@class NSURL;

@interface DDMapLinkController : NSObject <DDMiscActionProtocol> {
    NSURL *_mapURL;
}

+ (BOOL)requiresService;
+ (BOOL)displaysNonModalUI;
+ (id)localizedDynamicName;
+ (BOOL)requiresViewBridge;
+ (id)runActionWithResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;

- (void).cxx_destruct;
- (id)initWithResult:(struct __DDResult { } *)a0 context:(id)a1;
- (id)initWithTextCheckingResult:(id)a0 context:(id)a1;
- (void)runForItemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
