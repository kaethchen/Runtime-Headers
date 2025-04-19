@class NSArray, NSString;

@interface PHProjectTypeDescriptionStaticDataSource : NSObject <PHProjectTypeDescriptionDataSource>

@property (readonly, copy, nonatomic) NSArray *projectTypeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)footerTextForSubtypesOfProjectType:(id)a0;
- (id)initWithProjectTypeDescriptions:(id)a0;
- (id)subtypesForProjectType:(id)a0;
- (id)typeDescriptionForProjectType:(id)a0;

@end
