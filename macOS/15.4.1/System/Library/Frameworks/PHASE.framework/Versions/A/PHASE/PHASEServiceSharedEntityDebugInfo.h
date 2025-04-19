@class NSDictionary, PHASESharedListenerDebugInfo;

@interface PHASEServiceSharedEntityDebugInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PHASESharedListenerDebugInfo *sharedListener;
@property (readonly, copy, nonatomic) NSDictionary *sessionSharedRoots;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setSessionSharedRoots:(id)a0;
- (void)setSharedListener:(id)a0;

@end
