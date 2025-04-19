@interface DMUDSWrapper : NSObject <NSSecureCoding> {
    struct DMUDSPrivRec { unsigned long long signature_LE64; long long snap_num; char bsd_without_snap[150]; } _uds;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)wrapperWithUDS:(struct DMUDSPrivRec { unsigned long long x0; long long x1; char x2[150]; } *)a0;
+ (id)wrapperFromDADisk:(struct __DADisk { } *)a0;
+ (id)wrapperWithDiskIdentifier:(id)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (struct DMUDSPrivRec { unsigned long long x0; long long x1; char x2[150]; } *)UDSPtr;
- (id)initWithUDS:(struct DMUDSPrivRec { unsigned long long x0; long long x1; char x2[150]; } *)a0;
- (BOOL)isEqualSnapshot:(id)a0;
- (id)vettedWholeDiskWrapper;

@end
