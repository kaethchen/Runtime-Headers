@class CNContainer;

@interface CNCDPolicy : CNPolicy

@property (readonly, nonatomic) CNContainer *container;

+ (id)new;
+ (id)labelsByPropertyKey;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isReadonly;
- (id)initWithContainer:(id)a0;
- (BOOL)isContactPropertySupported:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0;
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)a0 label:(id)a1;
- (BOOL)shouldAddContact:(id)a0;
- (BOOL)shouldRemoveContact:(id)a0;
- (id)supportedLabelsForContactProperty:(id)a0;
- (id)unsupportedAttributesForLabeledContactProperty:(id)a0;

@end
