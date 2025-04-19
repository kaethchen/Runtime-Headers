@class REMTemplateChangeItem, NSArray, REMMemberships;

@interface REMTemplateSectionContextChangeItem : NSObject

@property (retain, nonatomic) REMTemplateChangeItem *templateChangeItem;
@property (nonatomic) BOOL shouldUpdateSectionsOrdering;
@property (retain, nonatomic) NSArray *unsavedSectionIDsOrdering;
@property (retain, nonatomic) REMMemberships *unsavedMembershipsOfRemindersInSections;

- (void).cxx_destruct;
- (id)initWithTemplateChangeItem:(id)a0;
- (void)undeleteSectionWithID:(id)a0;

@end
