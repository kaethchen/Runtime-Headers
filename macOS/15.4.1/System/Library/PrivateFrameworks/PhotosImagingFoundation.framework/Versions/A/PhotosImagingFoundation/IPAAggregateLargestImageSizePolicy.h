@class NSArray;

@interface IPAAggregateLargestImageSizePolicy : IPAImageSizePolicy {
    NSArray *_policies;
}

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithPolicies:(id)a0;
- (BOOL)isBestFitPolicy;
- (double)transformScaleForSize:(struct CGSize { double x0; double x1; })a0;

@end
