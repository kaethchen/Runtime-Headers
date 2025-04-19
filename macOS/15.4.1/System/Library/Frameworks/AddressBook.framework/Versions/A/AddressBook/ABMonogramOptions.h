@interface ABMonogramOptions : NSObject {
    id _impl;
}

+ (id)defaultOptions;
+ (id)optionsWithDiameter:(double)a0 backgroundStyle:(long long)a1;
+ (id)optionsWithDiameter:(double)a0;

- (void).cxx_destruct;
- (id)borderColor;
- (id)impl;
- (id)foregroundColor;
- (id)backgroundColor;
- (id)initWithImpl:(id)a0;
- (double)diameter;
- (BOOL)isVibrant;

@end
