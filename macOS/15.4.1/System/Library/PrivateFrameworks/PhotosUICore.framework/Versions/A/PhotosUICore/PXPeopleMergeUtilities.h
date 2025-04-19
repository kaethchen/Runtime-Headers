@interface PXPeopleMergeUtilities : NSObject

+ (BOOL)canMergeWithPeople:(id)a0;
+ (id)mergeAlertControllerWithNominalPeople:(id)a0 targetPerson:(id)a1 shouldHandleMergeInternally:(BOOL)a2 completion:(id /* block */)a3;

- (id)init;

@end
