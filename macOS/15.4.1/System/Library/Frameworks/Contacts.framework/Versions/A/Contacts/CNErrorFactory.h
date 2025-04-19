@interface CNErrorFactory : NSObject

+ (id)errorWithCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)_localizedDescriptionForCode:(long long)a0;
+ (id)_localizedReasonForCode:(long long)a0;
+ (id)errorByAddingUserInfoEntries:(id)a0 toError:(id)a1;
+ (id)errorByPrependingKeyPath:(id)a0 toKeyPathsInError:(id)a1;
+ (id)errorObject:(id)a0 doesNotImplementSelector:(SEL)a1;
+ (id)validationErrorByAggregatingValidationErrors:(id)a0;

@end
