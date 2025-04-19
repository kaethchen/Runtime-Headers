@class NSString;

@interface UINSShadowDatePickerValue : NSObject

@property (nonatomic) long long element;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textAreaRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (copy, nonatomic) NSString *dateFormat;
@property (copy, nonatomic) NSString *stringValue;

- (void).cxx_destruct;

@end
