@class CRSet, NSSet;

@interface CRRegisterMultiValue : CRRegister

@property (retain, nonatomic) CRSet *values;
@property (retain, nonatomic) NSSet *cachedValues;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)contents;
- (void)setContents:(id)a0;
- (void)setDocument:(id)a0;
- (id)initWithValues:(id)a0;
- (void)mergeWith:(id)a0;
- (id)allContents;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (id)initWithContents:(id)a0 document:(id)a1;
- (void)mergeWithRegisterMultiValue:(id)a0;
- (void)walkGraph:(id /* block */)a0;

@end
