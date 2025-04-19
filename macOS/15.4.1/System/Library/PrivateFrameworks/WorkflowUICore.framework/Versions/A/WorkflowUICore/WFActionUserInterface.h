@class NSString, WFWorkflowRunningContext, WFDialogAttribution, NSWindow;
@protocol WFActionUserInterfaceDelegate;

@interface WFActionUserInterface : NSObject <NSWindowDelegate, WFActionRemoteUserInterface>

@property (weak, nonatomic) id<WFActionUserInterfaceDelegate> delegate;
@property (readonly, nonatomic) WFDialogAttribution *attribution;
@property (retain, nonatomic) NSWindow *window;
@property (retain, nonatomic) WFWorkflowRunningContext *runningContext;
@property (readonly, nonatomic) NSWindow *presentationAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

@end
