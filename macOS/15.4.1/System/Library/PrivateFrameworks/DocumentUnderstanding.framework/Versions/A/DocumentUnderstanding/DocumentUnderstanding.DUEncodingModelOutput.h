@interface DocumentUnderstanding.DUEncodingModelOutput : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ modelName;
    void /* unknown type, empty encoding */ nHiddenLayers;
    void /* unknown type, empty encoding */ hiddenLayerSize;
    void /* unknown type, empty encoding */ sequenceSize;
    void /* unknown type, empty encoding */ pooledHiddenLayerValues;
    void /* unknown type, empty encoding */ hiddenLayerValues;
}

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
