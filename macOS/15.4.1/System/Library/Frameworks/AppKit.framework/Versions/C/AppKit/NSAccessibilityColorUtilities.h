@interface NSAccessibilityColorUtilities : NSObject

+ (id)accessibilityValueStringForRed:(double)a0;
+ (id)accessibilityValueStringForHue:(double)a0;
+ (id)accessibilityValueStringForAlpha:(double)a0;
+ (id)accessibilityValueStringForBlack:(double)a0;
+ (id)accessibilityValueStringForBlue:(double)a0;
+ (id)accessibilityValueStringForBrightness:(double)a0;
+ (id)accessibilityValueStringForCyan:(double)a0;
+ (id)accessibilityValueStringForGrayscale:(double)a0;
+ (id)accessibilityValueStringForGreen:(double)a0;
+ (id)accessibilityValueStringForMagenta:(double)a0;
+ (id)accessibilityValueStringForSaturation:(double)a0;
+ (id)accessibilityValueStringForYellow:(double)a0;
+ (double)alphaValueFromAccessibilityValueString:(id)a0;
+ (double)blackValueFromAccessibilityValueString:(id)a0;
+ (double)blueValueFromAccessibilityValueString:(id)a0;
+ (double)brightnessValueFromAccessibilityValueString:(id)a0;
+ (double)cyanValueFromAccessibilityValueString:(id)a0;
+ (double)grayscaleValueFromAccessibilityValueString:(id)a0;
+ (double)greenValueFromAccessibilityValueString:(id)a0;
+ (id)hexValueForColor:(id)a0;
+ (double)hueValueFromAccessibilityValueString:(id)a0;
+ (double)magentaValueFromAccessibilityValueString:(id)a0;
+ (double)redValueFromAccessibilityValueString:(id)a0;
+ (double)saturationValueFromAccessibilityValueString:(id)a0;
+ (double)yellowValueFromAccessibilityValueString:(id)a0;

@end
