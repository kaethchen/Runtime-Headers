@interface MsgFakeBoost : MsgImageFilter

+ (id)filterName;
+ (id)forwardBoost:(id)a0;
+ (id)forwardBoost:(id)a0 withBoost:(float)a1;
+ (id)inverseBoost:(id)a0;
+ (id)inverseBoost:(id)a0 withBoost:(float)a1;
+ (id)kernelArray;

@end
