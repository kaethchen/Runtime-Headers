@class NSOrderedSet, PHUserFeedback;

@interface PHPersonUserFeedbackProperties : PHPersonPropertySet

@property (readonly, nonatomic) PHUserFeedback *userFeedback;
@property (readonly, nonatomic) NSOrderedSet *autonamingUserFeedbacks;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (BOOL)isToMany;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToSortBy;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 person:(id)a1 prefetched:(BOOL)a2;

@end
