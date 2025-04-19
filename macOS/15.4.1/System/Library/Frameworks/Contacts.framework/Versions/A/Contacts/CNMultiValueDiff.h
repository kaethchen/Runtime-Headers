@class NSArray;

@interface CNMultiValueDiff : NSObject

@property (readonly, copy, nonatomic) NSArray *updates;

+ (id)diffMultiValue:(id)a0 toMultiValue:(id)a1;
+ (id)emptyDiff;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithUpdates:(id)a0;
- (id)multiValueByApplyToMultiValue:(id)a0 withIdentifierMap:(id)a1;
- (void)applyToABCDContact:(id)a0 propertyDescription:(id)a1;

@end
