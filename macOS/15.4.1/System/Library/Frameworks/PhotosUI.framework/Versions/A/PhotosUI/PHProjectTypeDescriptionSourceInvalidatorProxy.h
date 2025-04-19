@class NSString;
@protocol PHProjectTypeDescriptionInvalidator;

@interface PHProjectTypeDescriptionSourceInvalidatorProxy : NSObject <PHProjectTypeDescriptionInvalidator>

@property (retain, nonatomic) id<PHProjectTypeDescriptionInvalidator> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidateFooterTextForSubtypesOfProjectType:(id)a0;
- (void)invalidateTypeDescriptionForProjectType:(id)a0;

@end
