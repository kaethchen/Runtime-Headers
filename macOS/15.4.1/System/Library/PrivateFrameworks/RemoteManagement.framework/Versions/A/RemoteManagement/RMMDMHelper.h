@interface RMMDMHelper : NSObject

+ (id)_enrollDDMChannelIfNeededWithController:(id)a0 profileIdentifier:(id)a1 enrollmentType:(long long)a2 scope:(long long)a3 username:(id)a4 personaID:(id)a5 error:(id *)a6;
+ (id)_enrolledDDMChannelWithController:(id)a0 profileIdentifier:(id)a1 enrollmentType:(long long)a2 scope:(long long)a3 username:(id)a4 personaID:(id)a5 error:(id *)a6;
+ (id)_managementChannelForEnrollmentURL:(id)a0 controller:(id)a1 error:(id *)a2;
+ (BOOL)_unenrollDDMChannelWithController:(id)a0 enrollmentURL:(id)a1 enrollmentType:(long long)a2 error:(id *)a3;
+ (id)enrollmentURLForProfileIdentifier:(id)a0;
+ (BOOL)isActiveForScope:(long long)a0;
+ (BOOL)processDeclarativeManagementCommandWithProfileIdentifier:(id)a0 enrollmentType:(long long)a1 scope:(long long)a2 username:(id)a3 personaID:(id)a4 request:(id)a5 error:(id *)a6;
+ (void)setActive:(BOOL)a0 scope:(long long)a1;
+ (BOOL)unenrollWithProfileIdentifier:(id)a0 enrollmentType:(long long)a1 scope:(long long)a2 error:(id *)a3;

@end
