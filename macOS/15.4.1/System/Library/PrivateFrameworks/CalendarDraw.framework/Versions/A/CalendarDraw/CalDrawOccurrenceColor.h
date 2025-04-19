@class NSColor, CalDrawColorKey;

@interface CalDrawOccurrenceColor : NSObject {
    struct CGColor { } *_baseColor;
}

@property (retain, nonatomic) NSColor *selectedTextColor;
@property (retain) CalDrawColorKey *colorKey;

+ (id)adjustedUIOccurrenceColorForUnadjustedCalendarColor:(id)a0 appearance:(id)a1;
+ (id)colorForCGColor:(struct CGColor { } *)a0;
+ (void)clearColorCache;
+ (id)_getCacheForAppearance:(id)a0;
+ (id)adjustedOccurrenceColor:(id)a0;
+ (id)adjustedOccurrenceColor:(id)a0 forAppearance:(id)a1;
+ (id)colorForCGColor:(struct CGColor { } *)a0 appearance:(id)a1;
+ (id)colorForNSColor:(id)a0;
+ (id)colorForNSColor:(id)a0 appearance:(id)a1;
+ (id)styleStringForCGColor:(struct CGColor { } *)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct CGColor { } *)baseColor;
- (void)setBaseColor:(struct CGColor { } *)a0;

@end
