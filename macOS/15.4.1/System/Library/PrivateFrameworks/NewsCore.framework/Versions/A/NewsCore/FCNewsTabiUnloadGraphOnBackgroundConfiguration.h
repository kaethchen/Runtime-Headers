@class NSDictionary;

@interface FCNewsTabiUnloadGraphOnBackgroundConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *dictionary;
@property (nonatomic) BOOL enabled;
@property (nonatomic) long long graphIdleDuration;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
