@class CNReputationHandle;

@interface CNReputationResult : NSObject

@property (readonly, copy) CNReputationHandle *handle;
@property (readonly) long long score;

+ (id)descriptionForScore:(long long)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0 score:(long long)a1;

@end
