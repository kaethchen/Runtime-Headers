@interface RemoteNotificationWebService : NSObject

+ (id)urlRequestAddRegistration:(id)a0 authorizationToken:(id)a1 websiteIdentifier:(id)a2 deviceToken:(id)a3;
+ (id)urlRequestForWebBundle:(id)a0 bundleVersion:(long long)a1 websiteIdentifier:(id)a2 queryParameters:(id)a3;
+ (id)urlRequestForWebBundle:(id)a0 websiteIdentifier:(id)a1 queryParameters:(id)a2;
+ (id)urlRequestLog:(id)a0 websiteIdentifier:(id)a1 messages:(id)a2;
+ (id)urlRequestRegistration:(id)a0 authorizationToken:(id)a1 websiteIdentifier:(id)a2 deviceToken:(id)a3 method:(id)a4;
+ (id)urlRequestRemoveRegistration:(id)a0 authorizationToken:(id)a1 websiteIdentifier:(id)a2 deviceToken:(id)a3;

@end
