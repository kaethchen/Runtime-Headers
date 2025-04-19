@class ICNoteDateFormatterController, NSString, NSTextField, ICMZoomController, ICNote;

@interface ICMNoteEditorDateView : NSView <ICNoteDateFormatterControllerDelegate, ICMZoomableAttachmentView>

@property (class, readonly, nonatomic) double dateViewLabelAlpha;

@property (weak, nonatomic) NSTextField *dateLabel;
@property (copy, nonatomic) NSString *dateString;
@property (nonatomic) BOOL iconIsHidden;
@property (retain, nonatomic) ICNoteDateFormatterController *formatterController;
@property (retain, nonatomic) ICMZoomController *zoomController;
@property (retain, nonatomic) ICNote *note;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newDateView;

- (void).cxx_destruct;
- (void)reset;
- (id)accessibilityParent;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (id)accessibilityValue;
- (void)awakeFromNib;
- (BOOL)isAccessibilityElement;
- (void)mouseDown:(id)a0;
- (void)update;
- (void)hostViewDidZoom:(id)a0;
- (id)attributedStringForLabel;
- (void)formatter:(id)a0 iconHiddenDidChange:(BOOL)a1;
- (void)formatter:(id)a0 textDidChange:(id)a1;

@end
