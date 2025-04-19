@interface KHColor : NSObject {
    int _spinlock;
}

@property double whiteComponent;
@property double redComponent;
@property double greenComponent;
@property double blueComponent;
@property double alphaComponent;
@property (readonly, nonatomic) struct CGColor { } *CGColor;
@property (readonly, nonatomic) id systemColor;

+ (id)colorWithCalibratedRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithCalibratedWhite:(double)a0 alpha:(double)a1;
+ (id)systemBlueColor;
+ (id)blackColor;
+ (id)blueColor;
+ (id)brownColor;
+ (id)clearColor;
+ (id)cyanColor;
+ (id)darkGrayColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)lightGrayColor;
+ (id)magentaColor;
+ (id)orangeColor;
+ (id)purpleColor;
+ (id)redColor;
+ (id)whiteColor;
+ (id)yellowColor;
+ (id)colorFromSystemColor:(id)a0;
+ (id)colorRepresentedByString:(id)a0;

- (void)dealloc;
- (id)stringRepresentation;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)_initWithAlpha:(double)a0;

@end
