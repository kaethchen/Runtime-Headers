@interface FigVirtualDisplaySourceWrapper : NSObject {
    struct OpaqueFigVirtualDisplaySource { } *_source;
}

- (void)dealloc;
- (struct OpaqueFigVirtualDisplaySource { } *)source;
- (id)initWithSourceObject:(struct OpaqueFigVirtualDisplaySource { } *)a0;

@end
