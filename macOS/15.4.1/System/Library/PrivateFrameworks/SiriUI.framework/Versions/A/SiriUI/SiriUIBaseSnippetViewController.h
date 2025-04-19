@class SAUISnippet, NSUUID, AceObject, NSString, SiriSharedUISashItem;
@protocol SiriUIAceObjectViewControllerDelegate;

@interface SiriUIBaseSnippetViewController : NSViewController <SiriSharedUIViewControlling, SiriUIViewController>

@property (retain, nonatomic) NSUUID *instrumentationTurnIdentifier;
@property (retain, nonatomic) SAUISnippet *snippet;
@property (readonly, nonatomic) SiriSharedUISashItem *sashItem;
@property (weak, nonatomic) id<SiriUIAceObjectViewControllerDelegate> delegate;
@property (retain, nonatomic) AceObject *aceObject;
@property (nonatomic, getter=isUtteranceUserInteractionEnabled) BOOL utteranceUserInteractionEnabled;
@property (nonatomic) BOOL isInAmbient;
@property (nonatomic) BOOL isInAmbientInteractivity;
@property (nonatomic) BOOL isPresentedWithSmartDialogText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (double)desiredHeight;
- (id)_colorWithAceColor:(id)a0;
- (void)siriDidDeactivate;
- (void)wasAddedToTranscript;

@end
