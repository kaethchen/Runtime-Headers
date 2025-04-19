@interface SearchUI.SearchUIBasicLayerAnimation : NSObject <SearchUI.SearchUILayerAnimation> {
    void /* unknown type, empty encoding */ keyPath;
    void /* unknown type, empty encoding */ fromValue;
    void /* unknown type, empty encoding */ toValue;
}

+ (id)opacityFrom:(double)a0 to:(double)a1;
+ (id)blurFrom:(double)a0 to:(double)a1;
+ (id)horizontalScaleFrom:(double)a0 to:(double)a1;
+ (id)scaleFrom:(double)a0 to:(double)a1;
+ (id)verticalScaleFrom:(double)a0 to:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (id)animationWith:(id)a0;

@end
