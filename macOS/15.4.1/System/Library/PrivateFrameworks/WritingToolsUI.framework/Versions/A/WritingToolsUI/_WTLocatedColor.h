@class _WTColor;

@interface _WTLocatedColor : NSObject

@property (retain) _WTColor *color;
@property double location;

+ (id)locatedColor:(id)a0 location:(double)a1;

- (void).cxx_destruct;

@end
