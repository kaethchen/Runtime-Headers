@interface CRKASMRosterProviderFactory : NSObject

- (id)makeClassicAdHocSwitchReadingRosterProviderWithConfiguration:(id)a0;
- (id)makeEasyMAIDSignInRosterProvider;
- (id)makeInstructorRosterProvider;
- (id)makeInstructorRosterWithoutKeychainAndWithPersonaAdoption;
- (id)makeRosterProviderWithConfiguration:(id)a0;
- (id)makeStudentRosterProvider;

@end
