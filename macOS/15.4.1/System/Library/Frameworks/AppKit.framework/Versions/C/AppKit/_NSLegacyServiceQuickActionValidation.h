@class NSSet, NSString, NSMutableSet;
@protocol _NSQuickActionItemSource;

@interface _NSLegacyServiceQuickActionValidation : NSObject <_NSQuickActionValidation> {
    id<_NSQuickActionItemSource> _itemSource;
    NSSet *_unvalidatedQuickActions;
    NSMutableSet *_validQuickActions;
    void *_observationInfo;
}

@property (readonly) BOOL wantsAutovalidation;
@property (readonly, copy) NSSet *validQuickActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)automaticallyNotifiesObserversOfValidQuickActions;
+ (id)validationForItemSource:(id)a0 quickActions:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setObservationInfo:(void *)a0;
- (void *)observationInfo;
- (id)initForItemSource:(id)a0 quickActions:(id)a1;

@end
