@class NSView, NSDictionary, NSMutableArray;

@interface _MKLineHeaderModel : NSObject {
    NSMutableArray *_tokens;
}

@property (weak, nonatomic) NSView *ownerView;
@property (copy, nonatomic) NSDictionary *fontAttribute;
@property (copy, nonatomic) id /* block */ colorProvider;
@property (nonatomic) BOOL shouldUseEmptyPlaceholder;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)removeToken:(id)a0;
- (void)addToken:(id)a0;
- (id)_placeCardHeaderSeparatorString;
- (id)contentAttributedString;
- (void)insertToken:(id)a0 atIndex:(unsigned long long)a1;

@end
