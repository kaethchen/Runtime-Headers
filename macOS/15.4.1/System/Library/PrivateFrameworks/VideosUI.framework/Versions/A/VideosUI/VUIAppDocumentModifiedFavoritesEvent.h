@class NSSet;

@interface VUIAppDocumentModifiedFavoritesEvent : VUIAppDocumentUpdateEvent <NSCopying>

@property (copy, nonatomic) NSSet *addedEntityIDs;
@property (copy, nonatomic) NSSet *removedEntityIDs;
@property (nonatomic) BOOL isBackground;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDescriptor:(id)a0;
- (id)coalescedEvent:(id)a0;
- (id)initWithAction:(unsigned long long)a0 entityID:(id)a1 isBackground:(BOOL)a2;
- (id)initWithAddedEntityIDs:(id)a0 removedEntityIDs:(id)a1 isBackground:(BOOL)a2;

@end
