@interface _NSCallStackArray : NSArray {
    void **_frames;
    unsigned long long _cnt;
    unsigned long long _ignore;
    char **_pcstrs;
    BOOL _wantSyms;
}

+ (id)arrayWithFrames:(void **)a0 count:(unsigned long long)a1 symbols:(BOOL)a2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_descriptionWithBuffer:(char *)a0 size:(long long)a1;
- (unsigned long long)count;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;

@end
