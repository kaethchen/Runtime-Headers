@interface VoiceShortcuts.ToolKitIndexingQueue : NSObject <WFOutOfProcessWorkflowControllerDelegate> {
    void /* unknown type, empty encoding */ state;
}

- (id)init;
- (void).cxx_destruct;
- (void)outOfProcessWorkflowController:(id)a0 didFinishWithResult:(id)a1 dialogAttribution:(id)a2 runResidency:(unsigned long long)a3;

@end
