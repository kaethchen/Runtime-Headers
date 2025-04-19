@class _TtC12VectorSearch19VSKAttributeWrapper;

@interface VSKAttribute : NSObject <NSCopying> {
    _TtC12VectorSearch19VSKAttributeWrapper *wrapper;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 columnType:(id)a1;
- (id)_getWrapper;

@end
