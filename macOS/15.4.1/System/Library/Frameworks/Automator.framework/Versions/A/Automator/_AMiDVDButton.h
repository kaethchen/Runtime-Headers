@class NSString, _AMiDVDMenu;

@interface _AMiDVDButton : _AMiDVDItem

@property (copy) NSString *buttonShapeName;
@property (readonly) int buttonType;
@property (copy) NSString *customAsset;
@property (copy) NSString *fontColor;
@property (copy) NSString *fontDropShadow;
@property BOOL fontDropShadowEnabled;
@property (copy) NSString *fontName;
@property double fontSize;
@property long long horizontalOffset;
@property (readonly) BOOL isBack;
@property (readonly) BOOL isFolder;
@property (readonly) BOOL isForward;
@property BOOL isMotionButton;
@property (readonly) BOOL isMovie;
@property (readonly) BOOL isSlideshow;
@property (copy) NSString *label;
@property int labelAlignment;
@property int labelPosition;
@property (copy) NSString *name;
@property (readonly, copy) _AMiDVDMenu *parent;
@property double scalingFactor;
@property BOOL selectionState;
@property (readonly, copy) NSString *targetFolder;
@property (readonly, copy) NSString *targetMovie;
@property (readonly, copy) NSString *targetSlideshow;
@property int transitionDirection;
@property (readonly) double transitionDuration;
@property int transitionType;
@property long long verticalOffset;

@end
