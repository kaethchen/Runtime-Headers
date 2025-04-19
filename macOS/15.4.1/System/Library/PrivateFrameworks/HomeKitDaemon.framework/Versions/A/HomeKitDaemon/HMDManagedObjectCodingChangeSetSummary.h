@class NSString, NSSet;

@interface HMDManagedObjectCodingChangeSetSummary : HMFObject

@property (readonly) NSString *shortDescriptionForChangeSet;
@property (readonly) NSSet *insertedObjectNames;
@property (readonly) NSSet *modifiedObjectPropertyNames;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithShortDescriptionForChangeSet:(id)a0 insertedObjectNames:(id)a1 modifiedObjectPropertyNames:(id)a2;

@end
