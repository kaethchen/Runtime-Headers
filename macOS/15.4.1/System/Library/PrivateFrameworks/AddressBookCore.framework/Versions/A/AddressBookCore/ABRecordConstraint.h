@class NSArray;

@interface ABRecordConstraint : NSObject {
    NSArray *mValidProperties;
}

@property Class mConstraintClass;

- (void)dealloc;
- (id)validProperties;
- (id)availableLabelsForProperty:(id)a0 contact:(id)a1 delegate:(id)a2;
- (id)availableLabelsForProperty:(id)a0 person:(id)a1 delegate:(id)a2;
- (id)availablePropertiesForContact:(id)a0 delegate:(id)a1;
- (id)availablePropertiesForPerson:(id)a0 delegate:(id)a1;
- (id)genericRepresentationOfLabel:(id)a0 forProperty:(id)a1;
- (id)initWithRecordClass:(Class)a0;
- (id)initialLabelsForProperty:(id)a0;
- (id)initialProperties;
- (BOOL)isReadOnlyRecord:(id)a0;
- (BOOL)isValidProperty:(id)a0;
- (id)validLabelsForProperty:(id)a0;

@end
