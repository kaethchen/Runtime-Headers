@interface _NSSecureCodableTextAttachment : NSTextAttachment {
    void /* unknown type, empty encoding */ snapshotImage;
    void /* unknown type, empty encoding */ cellBaselineOffset;
    void /* unknown type, empty encoding */ snapshotImageKey;
    void /* unknown type, empty encoding */ cellBaselineOffsetKey;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 ofType:(id)a1;

@end
