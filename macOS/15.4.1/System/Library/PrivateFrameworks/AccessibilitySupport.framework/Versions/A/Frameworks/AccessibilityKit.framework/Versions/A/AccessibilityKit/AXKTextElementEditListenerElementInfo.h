@class AXFTextRange, AXKElementController, NSString, NSAttributedString;

@interface AXKTextElementEditListenerElementInfo : NSObject

@property (retain, nonatomic) AXKElementController *elementController;
@property (nonatomic) long long numberOfCharacters;
@property (copy, nonatomic) NSAttributedString *currentLineContent;
@property (retain, nonatomic) AXFTextRange *selectedRangeWithinLineContent;
@property (retain, nonatomic) AXFTextRange *selectedTextRange;
@property (retain, nonatomic) AXFTextRange *currentLineContentRange;
@property (copy, nonatomic) NSString *deletionCandidateText;
@property (copy, nonatomic) NSString *characterAfterSelection;
@property (nonatomic) long long alignment;
@property (copy, nonatomic) NSString *placeholderText;
@property (nonatomic) long long selectionStartLineIndex;
@property (nonatomic) long long selectionEndLineIndex;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isSpotlight;
@property (nonatomic) BOOL hasActiveInlineSession;
@property (nonatomic) BOOL isPreFetchInfo;
@property (nonatomic) BOOL isLastLineNewLine;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textElementFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } editingLineFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectionRangeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } elementWindowRect;
@property (nonatomic) BOOL isPasswordField;

- (void).cxx_destruct;
- (id)initWithElementController:(id)a0;

@end
