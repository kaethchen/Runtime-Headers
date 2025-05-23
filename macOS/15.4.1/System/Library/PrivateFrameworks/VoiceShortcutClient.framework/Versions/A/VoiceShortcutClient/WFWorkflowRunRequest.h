@class WFWorkflowRunViewSource, NSString, WFContentCollection, NSData, NSDictionary, NSXPCListenerEndpoint, NSSet;

@interface WFWorkflowRunRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *archivedInput;
@property (retain, nonatomic) WFContentCollection *cachedInput;
@property (nonatomic) unsigned long long presentationMode;
@property (readonly, nonatomic) id queueIdentifier;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) WFWorkflowRunViewSource *runViewSource;
@property (copy, nonatomic) NSString *parentBundleIdentifier;
@property (copy, nonatomic) NSString *automationType;
@property (nonatomic) BOOL isAutomationSuggestion;
@property (readonly, nonatomic, getter=isStepwise) BOOL stepwise;
@property (copy, nonatomic) NSString *trialID;
@property (copy, nonatomic) NSDictionary *listenerEndpoints;
@property (nonatomic) unsigned long long outputBehavior;
@property (nonatomic) BOOL allowsDialogNotifications;
@property (nonatomic) BOOL allowsHandoff;
@property (nonatomic) BOOL handlesDialogRequests;
@property (nonatomic) BOOL handlesSiriActionRequests;
@property (nonatomic) BOOL donateInteraction;
@property (nonatomic) BOOL logRunEvent;
@property (retain, nonatomic) NSString *parentRunningContextIdentifier;
@property (retain, nonatomic) NSXPCListenerEndpoint *remoteDialogPresenterEndpoint;
@property (copy, nonatomic) NSSet *extensionResourceClasses;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInput:(id)a0 presentationMode:(unsigned long long)a1;
- (void)getInputWithCompletionHandler:(id /* block */)a0;
- (id)unableToDecodeInputError;

@end
