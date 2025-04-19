@class _PGDevice;

@interface PGTaskMapping : PGMapping {
    _PGDevice *_device;
    unsigned long long _virtualOffset;
    struct PGTask_s { } *_task;
}

- (void)dealloc;
- (id)initWithVirtualOffset:(unsigned long long)a0 length:(unsigned long long)a1 taskInfo:(struct PGTaskInfo_s { struct PGTask_s *x0; void *x1; } *)a2 device:(id)a3;

@end
