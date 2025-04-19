@class NSUUID, AceObject, NSString;
@protocol SiriUIAceObjectViewControllerDelegate;

@interface SiriUIAceObjectViewController : NSViewController <SiriSharedUIViewControlling, SiriUIViewController>

@property (retain, nonatomic) NSUUID *instrumentationTurnIdentifier;
@property (retain, nonatomic) AceObject *aceObject;
@property (readonly, nonatomic, getter=isVirgin) BOOL virgin;
@property (weak, nonatomic) id<SiriUIAceObjectViewControllerDelegate> delegate;
@property (nonatomic, getter=isUtteranceUserInteractionEnabled) BOOL utteranceUserInteractionEnabled;
@property (nonatomic) BOOL isInAmbient;
@property (nonatomic) BOOL isInAmbientInteractivity;
@property (nonatomic) BOOL isPresentedWithSmartDialogText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (id)_privateDelegate;
- (double)desiredHeight;
- (void)_aceObjectViewControllerWillBeRemoved;
- (double)_insertionAnimatedZPosition;
- (long long)_insertionAnimation;
- (long long)_pinAnimationType;
- (long long)_replacementAnimation;
- (void)_setVirgin:(BOOL)a0;
- (BOOL)removedAfterDialogProgresses;
- (void)siriDidDeactivate;
- (void)wasAddedToTranscript;

@end
