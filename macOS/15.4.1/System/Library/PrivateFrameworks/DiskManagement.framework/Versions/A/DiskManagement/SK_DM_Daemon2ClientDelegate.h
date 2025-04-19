@class NSSet, DMManagerPrivVars, NSString;

@interface SK_DM_Daemon2ClientDelegate : NSObject <SK_DM_Daemon2ClientProtocol, NSPortDelegate>

@property (readonly, nonatomic) DMManagerPrivVars *dmPrivVars;
@property (readonly, nonatomic) NSSet *allowedClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handlePortMessage:(id)a0;
- (void)SK_DM_AsyncCallbackWithDict:(id)a0;
- (void)callbackClientInRunloopWithDict:(id)a0;
- (id)diskWrapperFromCallbackDict:(id)a0;
- (void)finishedCallbackWithDict:(id)a0;
- (id)initWithPrivVars:(id)a0;
- (void)interruptibilityChangedCallbackWithDict:(id)a0;
- (void)messageCallbackWithDict:(id)a0;
- (void)progressCallbackWithDict:(id)a0;
- (void)startedCallbackWithDict:(id)a0;

@end
