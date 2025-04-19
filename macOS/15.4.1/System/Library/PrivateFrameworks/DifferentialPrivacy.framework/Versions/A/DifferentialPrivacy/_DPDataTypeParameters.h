@class _DPPrivacyBudget;

@interface _DPDataTypeParameters : NSObject

@property (readonly, nonatomic) float localPrivacyBudget;
@property (readonly, nonatomic) _DPPrivacyBudget *budget;

+ (id)allDataTypeNames;
+ (id)dataTypeParametersFromDictionary:(id)a0;
+ (id)initParametersForDataType:(id)a0;
+ (id)parametersFromFile:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
