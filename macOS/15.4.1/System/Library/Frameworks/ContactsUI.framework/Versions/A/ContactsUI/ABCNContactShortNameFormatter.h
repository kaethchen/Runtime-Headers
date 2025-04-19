@interface ABCNContactShortNameFormatter : NSFormatter {
    unsigned long long _style;
    BOOL _preferNickname;
}

+ (id)stringFromContact:(id)a0;
+ (id)lastInitialShortNameForContact:(id)a0;
+ (id)combineFirstName:(id)a0 lastName:(id)a1 order:(long long)a2;
+ (id)fallbackShortNameForContact:(id)a0;
+ (id)firstInitialShortNameForContact:(id)a0;
+ (id)makeInitialForName:(id)a0;
+ (id)shortNameFromName:(id)a0;

- (id)stringForObjectValue:(id)a0;
- (id)stringFromContact:(id)a0;
- (id)idealShortNameForContact:(id)a0;
- (id)initWithStyle:(unsigned long long)a0 preferNickname:(BOOL)a1;
- (id)shortNameForContact:(id)a0;

@end
