@class IPARegion;

@interface _PAAutoAccessTiledImage : PATiledImage {
    IPARegion *_autoAccessRegion;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)_isBackingShared;
- (id)initWithTiledImage:(id)a0 region:(id)a1;

@end
