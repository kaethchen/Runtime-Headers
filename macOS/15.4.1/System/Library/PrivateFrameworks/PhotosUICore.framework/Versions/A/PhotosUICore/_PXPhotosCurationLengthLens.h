@interface _PXPhotosCurationLengthLens : PXPhotosViewLens {
    BOOL _isDefaultCurationLength;
    long long _curationLength;
}

- (BOOL)allowsActionType:(id)a0;
- (long long)curationLength;
- (BOOL)ignoresTopSafeAreaInset;
- (id)initWithCurationLength:(long long)a0 isDefault:(BOOL)a1;
- (BOOL)isDefaultCurationLength;
- (BOOL)wantsCuration;

@end
