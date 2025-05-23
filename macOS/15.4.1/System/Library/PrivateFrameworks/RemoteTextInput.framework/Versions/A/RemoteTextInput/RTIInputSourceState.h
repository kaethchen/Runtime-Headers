@class NSString;

@interface RTIInputSourceState : NSObject <NSSecureCoding> {
    union { int integerValue; struct { unsigned char minimized : 1; unsigned char hardwareKeyboardMode : 1; unsigned char centerFilled : 1; unsigned char split : 1; unsigned char floating : 1; unsigned char showingEmojiSearch : 1; unsigned char showsCandidateBar : 1; unsigned char usesCandidateSelection : 1; unsigned char supportsSetPhraseBoundary : 1; } fields; } _inputSourceStateMask;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *inputMode;
@property (nonatomic) BOOL minimized;
@property (nonatomic) BOOL hardwareKeyboardMode;
@property (nonatomic) BOOL centerFilled;
@property (nonatomic) BOOL split;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftSplitFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightSplitFrame;
@property (nonatomic) BOOL floating;
@property (nonatomic) BOOL showingEmojiSearch;
@property (nonatomic) BOOL supportsSetPhraseBoundary;
@property (nonatomic) BOOL usesCandidateSelection;
@property (nonatomic) BOOL showsCandidateBar;

- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
