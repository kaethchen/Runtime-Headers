@class NSView;

@interface ASCredentialRequestSubPane : NSObject

@property (readonly, nonatomic) NSView *view;
@property (nonatomic) double customSpacingAfter;

- (void).cxx_destruct;
- (id)initWithView:(id)a0;
- (void)addToStackView:(id)a0 withCustomSpacingAfter:(double)a1 context:(id)a2;

@end
