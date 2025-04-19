@interface __IOGCFastPathSimpleReader : __IOGCFastPathReader {
    const struct IOGCFastPathReaderInterface { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; unsigned short x4; unsigned short x5; unsigned int x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; } *_IOGCFastPathReaderVTBL;
    unsigned long long _currentPosition;
}

- (void)dealloc;
- (unsigned long long)_cfTypeID;

@end
