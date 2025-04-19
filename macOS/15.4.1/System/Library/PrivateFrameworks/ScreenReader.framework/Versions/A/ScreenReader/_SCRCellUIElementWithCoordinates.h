@class AXFUIElement;

@interface _SCRCellUIElementWithCoordinates : NSObject

@property (retain, nonatomic) AXFUIElement *uiElement;
@property (nonatomic) struct SCRDataCell { unsigned long long row; unsigned long long column; } coordinates;

- (void).cxx_destruct;

@end
