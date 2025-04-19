@class NSString, RTIInputSystemService;

@interface __NSTextInputContextRTISystemDelegate : NSObject <RTIInputSystemDelegate>

@property (readonly) RTIInputSystemService *rtiInputSystemService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)inputSystemService:(id)a0 didCreateInputSession:(id)a1;
- (void)inputSystemService:(id)a0 inputSession:(id)a1 performInputOperation:(id)a2;
- (void)inputSystemService:(id)a0 inputSessionDidBegin:(id)a1;
- (void)inputSystemService:(id)a0 inputSessionDidEnd:(id)a1;
- (void)inputSystemService:(id)a0 inputSessionDocumentDidChange:(id)a1;

@end
