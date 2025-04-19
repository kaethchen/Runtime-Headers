@interface TRIFBMutableBoxedInt64 : TRIFBBoxedInt64 {
    struct BoxedInt64 { long long x0; } *_ptr;
    BOOL _deleteWhenDone;
    BOOL _allowMutation;
}

@property (nonatomic) long long val;

+ (id)new;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (const struct BoxedInt64 { long long x0; } *)cppPointer;
- (id)initWithVal:(long long)a0;

@end
