@interface __NSMessageBuilder {
    Class isa;
    id _target;
    id *_addr;
}

+ (void)initialize;

- (void)finalize;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;

@end
