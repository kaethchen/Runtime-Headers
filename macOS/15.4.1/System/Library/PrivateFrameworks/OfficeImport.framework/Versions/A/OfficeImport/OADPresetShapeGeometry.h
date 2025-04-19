@interface OADPresetShapeGeometry : OADShapeGeometry {
    int mType;
}

- (id)description;
- (void)setType:(int)a0;
- (int)type;
- (id)equivalentCustomGeometry;
- (id)escherEquivalentCustomGeometry;
- (id)oa12EquivalentCustomGeometry;

@end
