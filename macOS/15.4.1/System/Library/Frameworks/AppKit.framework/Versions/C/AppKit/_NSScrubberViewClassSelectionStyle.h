@interface _NSScrubberViewClassSelectionStyle : NSScrubberSelectionStyle {
    Class _viewClass;
}

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithViewClass:(Class)a0;
- (id)makeSelectionView;

@end
