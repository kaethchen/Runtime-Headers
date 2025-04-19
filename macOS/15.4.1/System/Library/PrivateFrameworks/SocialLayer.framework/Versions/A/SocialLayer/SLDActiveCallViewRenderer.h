@class UISSlotStyle, SLDActiveCallViewSlotTag;

@interface SLDActiveCallViewRenderer : NSObject

@property (retain, nonatomic) UISSlotStyle *slotStyle;
@property (retain, nonatomic) SLDActiveCallViewSlotTag *slotTag;
@property (nonatomic, getter=isRTL) BOOL RTL;

- (void).cxx_destruct;
- (void)renderInContext:(struct CGContext { } *)a0;
- (id)initWithStyle:(id)a0 tag:(id)a1;

@end
