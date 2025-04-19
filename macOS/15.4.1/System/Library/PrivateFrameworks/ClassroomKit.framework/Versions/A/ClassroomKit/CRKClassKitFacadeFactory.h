@interface CRKClassKitFacadeFactory : NSObject

+ (BOOL)currentPlatformRequiresPersonaAdoption;
+ (BOOL)dataSeparationEnabled;
+ (id)makeBaseClassKitFacadeWithPersonaAdoption:(BOOL)a0;
+ (id)makeInstructorClassKitFacadeWithPersonaAdoption:(BOOL)a0;
+ (id)makeStudentClassKitFacade;

@end
