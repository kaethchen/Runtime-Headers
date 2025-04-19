@class NSString;

@interface PIParallaxStyleModeParameter : PIParallaxStyleParameter

@property (readonly, copy, nonatomic) NSString *modeValue;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)type;
- (id)initWithMode:(id)a0;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (BOOL)isEqualToParallaxStyleParameter:(id)a0;

@end
