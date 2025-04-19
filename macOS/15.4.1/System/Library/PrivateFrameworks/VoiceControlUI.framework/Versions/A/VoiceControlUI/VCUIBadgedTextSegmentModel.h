@class NSAttributedString;

@interface VCUIBadgedTextSegmentModel : NSObject {
    void /* unknown type, empty encoding */ range;
    void /* unknown type, empty encoding */ displayedRange;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ text;
@property (nonatomic, retain) void /* unknown type, empty encoding */ label;
@property (nonatomic) void /* unknown type, empty encoding */ isWhiteSpace;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } nsRange;
@property (nonatomic, readonly) NSAttributedString *representedText;
@property (nonatomic, readonly) NSAttributedString *displayedText;

- (void).cxx_destruct;

@end
