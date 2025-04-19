@interface DDSignatureMapController : DDSignaturePreviewController

+ (BOOL)actionValidForDataDetectorsResult:(struct __DDResult { } *)a0 url:(id)a1 textCheckingResult:(id)a2 context:(id)a3;
+ (unsigned long long)customContentType;
+ (struct __DDResult { } *)extractFromSignatureIfNeeded:(struct __DDResult { } *)a0;
+ (id)localizedDynamicName;

@end
