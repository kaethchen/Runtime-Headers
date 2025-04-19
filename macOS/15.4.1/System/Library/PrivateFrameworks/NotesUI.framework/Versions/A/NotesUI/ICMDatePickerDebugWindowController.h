@class NSDatePicker, NSTextField;

@interface ICMDatePickerDebugWindowController : NSWindowController

@property (nonatomic) unsigned char windowType;
@property (retain, nonatomic) id representedObject;
@property (weak) NSDatePicker *datePicker;
@property (weak) NSTextField *dateLabel;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;

+ (id)datePickerWindowWithType:(unsigned char)a0 representedObject:(id)a1;
+ (id)datePickerWindowWithType:(unsigned char)a0 representedObject:(id)a1 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

- (void).cxx_destruct;
- (void)setDate:(id)a0;
- (void)cancel:(id)a0;
- (void)windowDidLoad;
- (void)datePickerAction:(id)a0;
- (id)initWithWindowType:(unsigned char)a0 representedObject:(id)a1 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
