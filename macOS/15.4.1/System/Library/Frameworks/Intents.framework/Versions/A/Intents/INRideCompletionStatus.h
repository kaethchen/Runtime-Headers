@class NSString, NSUserActivity, NSSet, INCurrencyAmount;

@interface INRideCompletionStatus : NSObject <INCacheableContainer, INRideCompletionStatusExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isCanceledByService) BOOL canceledByService;
@property (retain) NSUserActivity *completionUserActivity;
@property (readonly, getter=isCompleted) BOOL completed;
@property (readonly, getter=isCanceled) BOOL canceled;
@property (readonly, getter=isMissedPickup) BOOL missedPickup;
@property (readonly) INCurrencyAmount *paymentAmount;
@property (readonly) unsigned long long feedbackType;
@property (readonly, getter=isOutstanding) BOOL outstanding;
@property (retain) NSSet *defaultTippingOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)completed;
+ (id)canceledByService;
+ (id)canceledByUser;
+ (id)canceledMissedPickup;
+ (id)completedWithOutstandingFeedbackType:(unsigned long long)a0;
+ (id)completedWithOutstandingPaymentAmount:(id)a0;
+ (id)completedWithSettledPaymentAmount:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)_initWithValue:(id)a0;
- (id)_initCompleted:(BOOL)a0 canceledByService:(BOOL)a1 missedPickup:(BOOL)a2 amount:(id)a3 feedbackType:(unsigned long long)a4 outstanding:(BOOL)a5;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)a0;
- (id)_newValue;
- (id)descriptionAtIndent:(unsigned long long)a0;

@end
