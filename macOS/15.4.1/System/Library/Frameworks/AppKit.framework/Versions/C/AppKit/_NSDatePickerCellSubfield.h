@class NSString;

@interface _NSDatePickerCellSubfield : NSObject <NSCopying> {
    int _element;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    NSString *_dateFormat;
    NSString *_stringValue;
}

@property (readonly) int element;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) NSString *dateFormat;
@property (copy) NSString *stringValue;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithElement:(int)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 dateFormat:(id)a2 stringValue:(id)a3;

@end
