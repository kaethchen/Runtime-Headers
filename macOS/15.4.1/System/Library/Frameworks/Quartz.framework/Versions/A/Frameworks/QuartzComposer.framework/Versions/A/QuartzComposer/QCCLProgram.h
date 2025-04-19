@interface QCCLProgram : NSObject {
    struct _cl_program { } *_program;
}

- (void)dealloc;
- (void)finalize;
- (id)initWithProgram:(struct _cl_program { } *)a0;

@end
