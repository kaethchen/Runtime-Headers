@interface CFPDContainerSource : CFPDSource {
    struct __CFString { } *_containerPath;
}

- (void)dealloc;
- (struct __CFString { } *)container;
- (id)initWithDomain:(struct __CFString { } *)a0 userName:(struct __CFString { } *)a1 container:(struct __CFString { } *)a2 byHost:(BOOL)a3 managed:(BOOL)a4 shmemIndex:(short)a5 daemon:(id)a6;

@end
