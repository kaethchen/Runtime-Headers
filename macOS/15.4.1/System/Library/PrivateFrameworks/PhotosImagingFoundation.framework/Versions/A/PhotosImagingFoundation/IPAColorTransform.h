@interface IPAColorTransform : NSObject {
    struct ColorSyncTransform { } *_transform;
}

+ (id)transformWithSourceProfile:(id)a0 destinationProfile:(id)a1;

- (void)dealloc;
- (id)initWithColorSyncTransform:(struct ColorSyncTransform { } *)a0;
- (id)lookupTableDataWithGridSize:(unsigned long long)a0;

@end
