@interface AMSUIBubbleTipInlineAnchorInfo : NSObject

@property unsigned long long arrowDirection;
@property double arrowOffset;
@property double relativeArrowOffset;

- (id)initWithArrowDirection:(unsigned long long)a0 arrowOffset:(double)a1;
- (id)initWithArrowDirection:(unsigned long long)a0 relativeArrowOffset:(double)a1;

@end
