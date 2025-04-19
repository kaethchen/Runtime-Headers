@class NSString;

@interface PKSystemProvider : NSObject <PKSystemProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CFRunLoopRun;
- (const char *)getenv:(const char *)a0;
- (int)access:(const char *)a0 amode:(int)a1;
- (void)exit:(int)a0;
- (int)getpid;
- (struct passwd { char *x0; char *x1; unsigned int x2; unsigned int x3; long long x4; char *x5; char *x6; char *x7; char *x8; long long x9; } *)getpwuid:(unsigned int)a0;
- (unsigned int)getuid;
- (void)xpc_transaction_exit_clean;
- (void)xpc_transaction_interrupt_clean_exit;

@end
