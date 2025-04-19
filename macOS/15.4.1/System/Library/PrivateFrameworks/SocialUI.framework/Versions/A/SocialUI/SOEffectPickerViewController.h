@class NSString, NSView, SOEffectPickerUnsentMessage, SOEffectPickerButtonController, NSMutableArray, SOVerticalPillView;
@protocol SOEffectPickerViewControllerDelegate;

@interface SOEffectPickerViewController : NSViewController <SOEffectPickerButtonControllerDelegate> {
    NSMutableArray *_descriptors;
    SOVerticalPillView *_verticalPill;
    NSView *_messageBubble;
}

@property (retain) SOEffectPickerUnsentMessage *unsentMessage;
@property (weak, nonatomic) id<SOEffectPickerViewControllerDelegate> delegate;
@property (retain, nonatomic) SOEffectPickerButtonController *selectedDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillLayout;
- (void)updateButtons:(BOOL)a0;
- (void)addEffectWithDisplayName:(id)a0 effectIdentifier:(id)a1 target:(id)a2 action:(SEL)a3;
- (void)animateInBubble:(id)a0 completion:(id /* block */)a1;
- (void)effectDescriptorWillActivate:(id)a0;
- (void)effectDescriptorWillSend:(id)a0;
- (id)initWithUnsentMessage:(id)a0;
- (void)setBubbleViewFrame:(id)a0 relativeToButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)showBubbleForButton:(id)a0 withDarkBackground:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateTextForDarkBackground:(BOOL)a0;

@end
