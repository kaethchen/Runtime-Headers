@class REMStore;

@interface REMTemplateSectionsDataView : NSObject

@property (readonly, nonatomic) REMStore *store;

- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)fetchTemplateSectionWithObjectID:(id)a0 error:(id *)a1;
- (id)fetchTemplateSectionsInTemplate:(id)a0 error:(id *)a1;
- (id)fetchTemplateSectionsWithObjectIDs:(id)a0 error:(id *)a1;
- (id)fetchTemplateSectionsWithTemplateObjectID:(id)a0 error:(id *)a1;
- (id)templateSectionsFromTemplateStorages:(id)a0 templateSectionStorages:(id)a1 store:(id)a2;

@end
