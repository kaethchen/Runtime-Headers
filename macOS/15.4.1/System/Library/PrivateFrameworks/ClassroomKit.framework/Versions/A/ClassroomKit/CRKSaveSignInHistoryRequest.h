@class CRKSignInHistoryItem;

@interface CRKSaveSignInHistoryRequest : CATTaskRequest

@property (retain, nonatomic) CRKSignInHistoryItem *item;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
