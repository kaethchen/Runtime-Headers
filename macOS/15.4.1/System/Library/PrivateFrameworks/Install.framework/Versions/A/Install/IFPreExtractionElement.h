@class IFInstallJob;

@interface IFPreExtractionElement : IFInstallQueueElement {
    int _installKey;
    IFInstallJob *_installJob;
    struct _modDirs_t { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } *_modDirsPtr;
}

- (id)description;
- (long long)run;
- (id)logDescription;
- (id)initWithFlags:(struct _modDirs_t { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } *)a0 key:(int)a1;
- (void)setInstallJob:(id)a0;

@end
