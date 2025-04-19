@class NSString;

@interface CRListItemMarker : NSObject

@property (retain) NSString *stringValue;
@property struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property struct _NSRange { unsigned long long location; unsigned long long length; } itemizingComponentRange;
@property long long type;

+ (id)_detectPredefinedListMarker:(id)a0 fromSet:(id)a1 markerType:(long long)a2;
+ (id)bulletsSet;
+ (id)decorativeDecimalsSet;
+ (id)endOfMarkerSet;
+ (id)extendedMarkersSet;
+ (id)hyphensSet;
+ (id)listItemMarkerForText:(id)a0 requiresAdjacentText:(BOOL)a1;
+ (id)nonMarkerNumericConstructSeparatorSet;
+ (id)startOfMarkerSet;

- (void).cxx_destruct;
- (long long)integerValue;
- (BOOL)_canCompositeDecimalBeSucceededByCompositeDecimal:(id)a0;
- (long long)_valueFromDecimal;
- (long long)_valueFromDecorativeDecimal;
- (long long)_valueFromLowercaseLatin;
- (long long)_valueFromUppercaseLatin;
- (id)_valuesFromCompositeDecimal;
- (BOOL)canBeSucceededByMarker:(id)a0;
- (id)initWithType:(long long)a0 stringValue:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 itemizingComponentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;

@end
