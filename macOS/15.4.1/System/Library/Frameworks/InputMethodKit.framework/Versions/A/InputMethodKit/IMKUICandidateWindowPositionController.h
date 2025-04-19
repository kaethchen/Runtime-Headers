@class IMKUICandidateWindowController, NSAttributedString;
@protocol IMKTextInput, NSObject;

@interface IMKUICandidateWindowPositionController : NSObject

@property (nonatomic) long long effectiveHorizontalPositionHint;
@property (nonatomic) unsigned long long effectivePositionType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } screenVisibleFrame;
@property (nonatomic) long long alignment;
@property (weak, nonatomic) IMKUICandidateWindowController *candidateController;
@property (nonatomic) BOOL forceNoIncrementalSearchPositioning;
@property (retain, nonatomic) id<IMKTextInput, NSObject> client;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fallbackTextFrame;
@property (copy, nonatomic) NSAttributedString *inlineText;
@property (nonatomic) BOOL isUsingIncrementalSearch;
@property (nonatomic) unsigned long long preferredPositionType;
@property (nonatomic) BOOL rightAlignWhenOverflowingRight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textFrame;
@property (nonatomic) double textRectMargin;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } topWindowPosition;
@property (nonatomic) BOOL updatePositionOnEachKeyPress;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } windowFrame;

- (id)init;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })bottomLeftPointForCurrentScreenWithWindowSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canFitWindowInLocation:(unsigned long long)a0 textFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfCurrentlyVisibleScreenUsingConstrainedFrame:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inlineFrameWithClient:(id)a0;
- (BOOL)isUsingPositioningCorrection;
- (struct CGPoint { double x0; double x1; })positionForWindowInLocation:(unsigned long long)a0 textFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inlineAlignment:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })positionWithPreferenceArray:(id)a0 inlineAlignment:(unsigned long long)a1;
- (struct CGPoint { double x0; double x1; })proposedTopWindowPosition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })proposedWindowFrameWithPosition:(struct CGPoint { double x0; double x1; })a0;

@end
