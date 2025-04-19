@class NSString, NSArray;

@interface MRScrapbookLayout : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
    double zRotation;
    double startTime;
    long long slideIndex;
    double aspectRatio;
    BOOL stretch;
    BOOL isText;
    BOOL isBreak;
    BOOL twoPart;
    BOOL move;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } paperRect;
    long long drawCardIndex;
    BOOL skip;
    long long moveIndex;
}

@property (retain, nonatomic) NSString *frame;
@property (retain, nonatomic) NSString *mask;
@property (retain, nonatomic) NSString *backgroundPaper;
@property (retain, nonatomic) NSArray *subtract;

- (void)dealloc;

@end
