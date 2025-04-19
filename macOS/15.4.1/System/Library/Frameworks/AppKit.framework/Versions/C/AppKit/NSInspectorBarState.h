@interface NSInspectorBarState : NSObject

@property (retain) id familyName;
@property (retain) id faceName;
@property double pointSize;
@property (retain) id foregroundColor;
@property (retain) id backgroundColor;
@property (retain) id underlineStyle;
@property (retain) id strikeThrough;
@property long long alignment;
@property long long horizontalAlignment;
@property BOOL fullyJustified;
@property (retain) id lineSpacingStyle;
@property (retain) id textList;
@property char boldTrait;
@property char italicTrait;

- (void)dealloc;
- (id)init;

@end
