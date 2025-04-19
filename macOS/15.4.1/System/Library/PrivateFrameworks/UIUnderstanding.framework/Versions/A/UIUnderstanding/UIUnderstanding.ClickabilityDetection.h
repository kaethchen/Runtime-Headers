@interface UIUnderstanding.ClickabilityDetection : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ clickable;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ clickType;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ confidence;

- (id)init;
- (id)initWithClickable:(BOOL)a0 clickType:(long long)a1 confidence:(double)a2;

@end
