@class NSUUID, HMDMatterPath;

@interface HMDMatterAttributeEventBase : HMDEvent

@property (retain) NSUUID *matterPathUUID;
@property (readonly, nonatomic) HMDMatterPath *matterPath;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;
+ (id)compareValueOfAttribute:(id)a0 againstValue:(id)a1 operatorType:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isActive;
- (id)createPayload;
- (void)__handleAttributesChangedNotification:(id)a0;
- (BOOL)_activate:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)_evaluateNewValue:(id)a0;
- (void)_registerForMessages;
- (void)handleAttributesChangedNotification:(id)a0;
- (id)initWithModel:(id)a0 home:(id)a1;
- (BOOL)isCompatibleWithEvent:(id)a0;

@end
