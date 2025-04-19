@class NSString;

@interface CRFormFilterSurfacedFieldsStep : NSObject <CRFormPostProcessingStep>

@property (readonly) BOOL assignGlobalOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setGlobalIndexesForFields:(id)a0 externalFields:(id)a1;
- (id)initWithAssignGlobalOrder:(BOOL)a0;
- (id)process:(id)a0 externalFields:(id)a1 document:(id)a2 options:(id)a3;

@end
