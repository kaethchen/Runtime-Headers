@class NSDictionary;

@interface SUCorePolicyRollback : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL performPhase;
@property (nonatomic) BOOL performRollbackPreparePhase;
@property (nonatomic) BOOL performRollbackSuspendPhase;
@property (nonatomic) BOOL performRollbackResumePhase;
@property (nonatomic) BOOL performRollbackApplyPhase;
@property (nonatomic) BOOL skipCancelPreviousUpdate;
@property (retain, nonatomic) NSDictionary *additionalOptions;
@property (retain, nonatomic) NSDictionary *baseRollbackOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;

@end
