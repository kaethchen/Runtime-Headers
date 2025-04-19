@class NSNumber, NSString;

@interface PIParallaxStyleNumberParameter : PIParallaxStyleParameter

@property (readonly, nonatomic) NSNumber *numberValue;
@property (readonly, nonatomic) NSString *unit;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)type;
- (id)initWithNumber:(id)a0;
- (id)initWithNumber:(id)a0 unit:(id)a1;
- (id)evaluateWithContext:(id)a0 error:(out id *)a1;
- (BOOL)isEqualToParallaxStyleParameter:(id)a0;

@end
