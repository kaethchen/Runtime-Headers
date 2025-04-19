@class NSMutableIndexSet;

@interface CIMMecabraZhuyinCandidate : CIMMecabraCandidate

@property (nonatomic, getter=isWholeInputCandidate) BOOL wholeInputCandidate;
@property (nonatomic, getter=isDirectlyCommitCandidate) BOOL directlyCommitCandidate;
@property (nonatomic, getter=isFacemarkCandidate) BOOL facemarkCandidate;
@property (nonatomic, getter=isPunctuationCandidate) BOOL punctuationCandidate;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } inputBufferRange;
@property (retain, nonatomic) NSMutableIndexSet *cursorBoundariesIndexSet;
@property (readonly) BOOL hasUnsupportedReading;

- (void).cxx_destruct;

@end
