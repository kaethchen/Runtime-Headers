@interface ContactsPersistence.CNCDContactVCardParsedResultBuilder : NSObject <CNVCardParsedResultBuilder> {
    void /* unknown type, empty encoding */ contact;
    void /* unknown type, empty encoding */ isEmpty;
}

- (id)init;
- (void).cxx_destruct;
- (id)build;
- (id)valueForProperty:(id)a0;
- (BOOL)canSetValueForProperty:(id)a0;
- (BOOL)setImageData:(id)a0 forReference:(id)a1 clipRects:(id)a2;
- (void)setUnknownProperties:(id)a0;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (BOOL)setValues:(id)a0 labels:(id)a1 isPrimaries:(id)a2 forProperty:(id)a3;
- (id)validCountryCodes;

@end
