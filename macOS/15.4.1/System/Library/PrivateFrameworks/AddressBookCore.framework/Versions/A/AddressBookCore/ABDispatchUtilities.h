@interface ABDispatchUtilities : NSObject

+ (void)setOnce:(id *)a0 constructor:(id /* block */)a1;
+ (void)setOnce:(id *)a0 constructor:(id /* block */)a1 successHandler:(id /* block */)a2 failureHandler:(id /* block */)a3;

@end
