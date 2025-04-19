@class NSString;

@interface BMSource : NSObject

@property (readonly, nonatomic) NSString *identifier;

+ (id)new;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)sendEvent:(id)a0;
- (void)sendEvent:(id)a0 timestamp:(double)a1;
- (void)sendEvent:(id)a0 date:(id)a1;

@end
