@class NSSet, NSString;
@protocol _NSQuickActionItemSource;

@interface _NSShortcutsQuickActionValidation : NSObject <_NSQuickActionValidation> {
    id<_NSQuickActionItemSource> _itemSource;
    NSSet *_unvalidatedQuickActions;
    NSSet *_validQuickActions;
    void *_observationInfo;
}

@property (readonly) BOOL wantsAutovalidation;
@property (readonly, copy) NSSet *validQuickActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfValidQuickActions;
+ (id)validationForItemSource:(id)a0 quickActions:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setObservationInfo:(void *)a0;
- (void *)observationInfo;
- (id)initForItemSource:(id)a0 quickActions:(id)a1;
- (void)validateQuickActions:(id)a0 forContext:(id)a1 byType:(unsigned long long)a2 completionBlock:(id /* block */)a3;

@end
