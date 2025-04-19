@class BKSAnimationFenceHandle, NSString;

@interface UVFenceHandle : NSObject <BSXPCSecureCoding>

@property (readonly, nonatomic) BKSAnimationFenceHandle *underlying;
@property (readonly, nonatomic) unsigned long long fenceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)copy;
- (void).cxx_destruct;
- (void)invalidate;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithUnderlying:(id)a0;

@end
