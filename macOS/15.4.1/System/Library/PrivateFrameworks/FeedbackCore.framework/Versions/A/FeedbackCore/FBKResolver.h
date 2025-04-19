@class NSArray;

@interface FBKResolver : NSObject

@property (readonly) NSArray *arguments;

+ (id)name;
+ (id)resolverForName:(id)a0;
+ (id)resolverForName:(id)a0 arguments:(id)a1;
+ (id)resolverForQuestion:(id)a0;

- (id)run;
- (void).cxx_destruct;
- (void)setArguments:(id)a0;
- (long long)expectedArguments;

@end
