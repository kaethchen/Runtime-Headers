@class NSMutableOrderedSet, NSUUID, _HMContext, NSString, NSArray, HMAccessorySettings, NSObject;
@protocol NSSecureCoding, NSCopying, _HMAccessorySettingDelegate, OS_dispatch_queue;

@interface _HMAccessorySetting : NSObject <HMFLogging, HMFMessageReceiver, HMFMerging, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableOrderedSet *_constraints;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) HMAccessorySettings *accessorySettings;
@property (retain, nonatomic) _HMContext *context;
@property (weak) id<_HMAccessorySettingDelegate> delegate;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) long long type;
@property (readonly) unsigned long long properties;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *constraints;
@property (copy) id<NSCopying, NSSecureCoding> value;
@property (readonly, getter=isReflected) BOOL reflected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)_encodedConstraintsToAdd:(id)a0;
+ (id)_encodedConstraintsToRemove:(id)a0;
+ (id)_replaceConstraintsPayloadWithAdditions:(id)a0 removals:(id)a1 keyPath:(id)a2;
+ (id)supportedConstraintClasses;
+ (id)supportedValueClasses;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void)addConstraint:(id)a0;
- (void)removeConstraint:(id)a0;
- (void)setConstraints:(id)a0;
- (id)logIdentifier;
- (void)updateValue:(id)a0 completionHandler:(id /* block */)a1;
- (id)descriptionWithPointer:(BOOL)a0;
- (BOOL)mergeObject:(id)a0;
- (void)_handleUpdatedValue:(id)a0;
- (void)_registerUpdatedValueHandlers;
- (void)addConstraint:(id)a0 completionHandler:(id /* block */)a1;
- (void)configureWithAccessorySettings:(id)a0 context:(id)a1;
- (void)configureWithAccessorySettings:(id)a0 context:(id)a1 shouldHandleUpdatedValue:(BOOL)a2;
- (id)constraintWithType:(long long)a0;
- (id)initWithType:(long long)a0 properties:(unsigned long long)a1 name:(id)a2 constraints:(id)a3;
- (BOOL)mergeConstraints:(id)a0;
- (id)messageDestination;
- (void)notifyDelegateOfAddedConstraint:(id)a0;
- (void)notifyDelegateOfRemovedConstraint:(id)a0;
- (void)removeConstraint:(id)a0 completionHandler:(id /* block */)a1;
- (void)replaceConstraints:(id)a0 withConstraints:(id)a1 completionHandler:(id /* block */)a2;
- (void)setReflected:(BOOL)a0;
- (void)unconfigure;
- (void)updateConstraints:(id)a0 completionHandler:(id /* block */)a1;

@end
