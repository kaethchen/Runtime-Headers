@class NSString, _TtC14VoiceControlUI37VCUIBadgedTextOverlayController_Swift;

@interface VCUIBadgedTextOverlayController : NSViewController {
    _TtC14VoiceControlUI37VCUIBadgedTextOverlayController_Swift *_swiftVC;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long startIndex;
@property (nonatomic) BOOL popoverShowing;
@property (nonatomic) long long type;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRect;
@property (nonatomic) long long zOrder;
@property (nonatomic) BOOL isOverlay;

+ (id)textSegmentModelsForText:(id)a0 type:(long long)a1 start:(long long)a2;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (id)displayedTextSegmentModels;

@end
