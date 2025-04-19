@interface SCRPositionUtilities : NSObject

+ (id)sharedNumberFormatter;
+ (id)_pixelDescriptionForPixelValue:(double)a0;
+ (id)descriptionForDouble:(double)a0 precision:(unsigned long long)a1;
+ (id)_picasDescriptionForPixelValue:(double)a0;
+ (id)_areaDescriptionOfElement:(id)a0 inSection:(id)a1;
+ (id)_areaDescriptionOfElement:(id)a0 inSections:(id)a1;
+ (id)_descriptionForMeasurement:(id)a0 precision:(unsigned long long)a1;
+ (id)_measurementForPixels:(double)a0 convertToUnit:(long long)a1;
+ (long long)_precisionForMeasurement:(id)a0 supportsPrecision:(BOOL)a1;
+ (id)_sections:(id)a0 intersectingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)areaDescriptionOfContainerElement:(id)a0 containerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 underElementWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)areaDescriptionOfElement:(id)a0 inSections:(id)a1;
+ (id)descriptionForAlreadyConvertedValue:(double)a0 precision:(unsigned long long)a1 unit:(long long)a2;
+ (id)descriptionForElementAtPosition:(struct CGPoint { double x0; double x1; })a0 description:(id)a1 comparedToElementAtPosition:(struct CGPoint { double x0; double x1; })a2 description:(id)a3;
+ (id)descriptionForPixelValue:(double)a0 unit:(long long)a1 precision:(unsigned long long)a2;
+ (id)descriptionForPixelValue:(double)a0 unit:(long long)a1 supportsPrecision:(BOOL)a2;
+ (id)numberFormatterWithPrecision:(unsigned long long)a0;
+ (id)sectorDescription:(long long)a0;
+ (id)sharedMeasurementFormatter;
+ (id)threeByThreeSectionsOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
