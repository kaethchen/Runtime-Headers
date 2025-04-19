@class NSString;

@interface SOSelectionOverlayTextSegment : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *label;

@end
