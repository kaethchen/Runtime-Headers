@class IMKCandidateController;
@protocol IMKTextInput, NSObject;

@interface IMKCandidateWindowPositioning : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameOfCurrentlyVisibleScreen;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } screenVisibleFrame;
@property (nonatomic) IMKCandidateController *candidateController;
@property (nonatomic) BOOL forceNoIncrementalSearchPositioning;
@property (retain, nonatomic) id<IMKTextInput, NSObject> client;
@property (nonatomic) BOOL isRTL;
@property (nonatomic) BOOL isUsingIncrementalSearch;
@property (nonatomic) BOOL isVerticallyAligned;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textFrame;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } topWindowPosition;
@property (nonatomic) BOOL updatePositionOnEachKeyPress;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } windowFrame;

- (void)dealloc;
- (BOOL)canFitWindowInLocation:(unsigned long long)a0 textFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfCurrentlyVisibleScreen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })inlineFrameWithClient:(id)a0;
- (struct CGPoint { double x0; double x1; })positionForWindowInLocation:(unsigned long long)a0 textFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inlineAlignment:(unsigned long long)a2;
- (struct CGPoint { double x0; double x1; })positionWithPreferenceArray:(id)a0 inlineAlignment:(unsigned long long)a1;

@end
