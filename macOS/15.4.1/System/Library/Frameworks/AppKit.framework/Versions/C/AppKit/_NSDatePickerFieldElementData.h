@class NSString;

@interface _NSDatePickerFieldElementData : NSObject

@property int element;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textAreaRect;
@property (retain) NSString *dateFormat;
@property (copy) NSString *stringValue;

- (void)dealloc;

@end
