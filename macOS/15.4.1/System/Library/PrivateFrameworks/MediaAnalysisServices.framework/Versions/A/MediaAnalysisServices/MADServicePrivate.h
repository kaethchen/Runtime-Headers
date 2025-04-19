@interface MADServicePrivate : MADService

+ (id)allowedClasses;
+ (id)serviceName;
+ (id)serverProtocol;
+ (void)configureServerInterface:(id)a0;
+ (id)allowedMultiModalRequestClasses;
+ (id)allowedTextRequestClasses;
+ (id)allowedTextResultClasses;
+ (id)allowedVideoRequestClasses;
+ (id)allowedVideoResultClasses;

@end
