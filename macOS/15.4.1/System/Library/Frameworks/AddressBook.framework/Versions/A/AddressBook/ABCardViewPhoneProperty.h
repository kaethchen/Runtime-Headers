@class ABRTTServices;

@interface ABCardViewPhoneProperty : ABCardViewProperty {
    ABRTTServices *_ttyServices;
}

- (void).cxx_destruct;
- (id)actionForGlyphName:(id)a0;
- (id)actionGlyphNames;
- (id)emptyValueForMultiValue:(id)a0 label:(id)a1;
- (id)initWithValueKey:(id)a0 TTYServices:(id)a1;
- (BOOL)isValueEmpty:(id)a0;

@end
