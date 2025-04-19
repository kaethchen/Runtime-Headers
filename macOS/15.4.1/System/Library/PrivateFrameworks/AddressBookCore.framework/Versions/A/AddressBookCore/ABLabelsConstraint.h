@class NSString, ABPropertyDefaults;

@interface ABLabelsConstraint : NSObject <ABLabelsConstraint>

@property (retain, nonatomic) ABPropertyDefaults *defaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelsConstraint;

- (void)dealloc;
- (id)init;
- (id)availableLabelsForProperty:(id)a0 activeLabels:(id)a1;
- (BOOL)customLabelsSupported;
- (id)initialLabelsForProperty:(id)a0;
- (BOOL)isLabelSupported:(id)a0 forProperty:(id)a1;
- (BOOL)isPropertySupported:(id)a0;
- (BOOL)isSingleValuePropety:(id)a0;

@end
