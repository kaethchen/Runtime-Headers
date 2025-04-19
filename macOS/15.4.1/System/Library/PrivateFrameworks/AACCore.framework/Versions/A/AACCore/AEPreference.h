@class NSString;
@protocol AEPreferencePrimitives, AESystemNotificationPrimitives;

@interface AEPreference : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) id<AEPreferencePrimitives> preferencePrimitives;
@property (readonly, nonatomic) id<AESystemNotificationPrimitives> systemNotificationPrimitives;
@property (readonly, nonatomic) id defaultValue;
@property (retain, nonatomic) id preferenceValue;
@property (copy, nonatomic) id value;
@property (readonly, nonatomic, getter=isOverridden) BOOL overridden;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 preferencesPrimitives:(id)a1 systemNotificationPrimitives:(id)a2 defaultValue:(id)a3;
- (void)preferenceDidUpdate;

@end
