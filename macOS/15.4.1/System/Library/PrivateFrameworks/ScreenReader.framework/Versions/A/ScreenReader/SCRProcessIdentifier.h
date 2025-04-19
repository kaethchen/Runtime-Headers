@interface SCRProcessIdentifier : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic, readonly) struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } psn;
@property (nonatomic, readonly) int pid;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (id)initWithPSN:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; })a0;

@end
