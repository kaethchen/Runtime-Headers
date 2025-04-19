@interface OADValueColorTransform : OADColorTransform {
    float mValue;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (float)value;
- (void)setValue:(float)a0;

@end
