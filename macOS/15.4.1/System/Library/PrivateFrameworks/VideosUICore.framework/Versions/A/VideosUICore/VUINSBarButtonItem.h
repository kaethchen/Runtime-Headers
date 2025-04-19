@class NSView;

@interface VUINSBarButtonItem : NSObject

@property (nonatomic) long long style;
@property (nonatomic) double width;
@property (retain, nonatomic) NSView *customView;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) SEL action;
@property (weak, nonatomic) id target;

+ (id)fixedSpaceItemOfWidth:(double)a0;

- (void).cxx_destruct;
- (id)initWithCustomView:(id)a0;

@end
