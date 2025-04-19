@interface PLURL : NSURL {
    _Atomic unsigned short _ssbCounter;
}

- (void)dealloc;
- (BOOL)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;
- (id)replacementObjectForCoder:(id)a0;

@end
