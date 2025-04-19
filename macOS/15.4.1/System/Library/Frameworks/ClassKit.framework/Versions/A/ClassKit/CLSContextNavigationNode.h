@class NSString;

@interface CLSContextNavigationNode : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *childObjectID;

+ (BOOL)supportsSecureCoding;
+ (id)objectIDForParentContextID:(id)a0 andChildContextID:(id)a1;
+ (id)relations;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (BOOL)validateObject:(id *)a0;
- (id)initWithParentContextID:(id)a0 childContextID:(id)a1;
- (void)mergeWithObject:(id)a0;

@end
