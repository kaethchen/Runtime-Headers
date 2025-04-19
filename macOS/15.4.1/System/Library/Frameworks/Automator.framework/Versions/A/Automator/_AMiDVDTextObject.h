@class NSString, _AMiDVDMenu;

@interface _AMiDVDTextObject : _AMiDVDItem

@property (copy) NSString *content;
@property (copy) NSString *fontColor;
@property (copy) NSString *fontName;
@property double fontSize;
@property long long horizontalOffset;
@property (copy) NSString *name;
@property (readonly, copy) _AMiDVDMenu *parent;
@property BOOL selectionState;
@property long long verticalOffset;

@end
