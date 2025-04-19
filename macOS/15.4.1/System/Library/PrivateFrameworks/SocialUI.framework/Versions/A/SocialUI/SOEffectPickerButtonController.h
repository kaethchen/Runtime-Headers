@class NSString, NSButton, NSTextField;
@protocol SOEffectPickerButtonControllerDelegate, IMDynamicGradientReferenceView;

@interface SOEffectPickerButtonController : NSObject

@property (weak, nonatomic) id<SOEffectPickerButtonControllerDelegate> delegate;
@property (nonatomic, getter=isActivated) BOOL activated;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *effectIdentifier;
@property (retain, nonatomic) NSTextField *label;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelFrame;
@property (retain, nonatomic) id<IMDynamicGradientReferenceView> gradientReferenceView;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;
@property (retain, nonatomic) NSButton *previewButton;
@property (retain, nonatomic) NSButton *sendButton;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addLabelToView:(id)a0;
- (void)addButtonsToView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })buttonFrameInView:(id)a0;
- (id)createViewForPickerWithUnsentMessage:(id)a0 effectIsDark:(BOOL)a1;
- (id)initWithDisplayName:(id)a0 effectIdentifier:(id)a1 target:(id)a2 action:(SEL)a3;
- (void)willPreview:(id)a0;
- (void)willSend:(id)a0;

@end
