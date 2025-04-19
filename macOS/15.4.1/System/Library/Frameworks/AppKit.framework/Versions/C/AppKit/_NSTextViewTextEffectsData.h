@class NSScrollView, NSMutableArray;

@interface _NSTextViewTextEffectsData : NSObject

@property (nonatomic) BOOL isAnimatingReplacement;
@property (nonatomic) BOOL shouldFuseChunks;
@property (retain, nonatomic) NSMutableArray *textAnimationContexts;
@property (weak, nonatomic) NSScrollView *enclosingScrollView;

- (id)init;
- (void).cxx_destruct;

@end
