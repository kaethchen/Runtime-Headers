@class NSSet;

@interface VUIAppDocumentModifiedUpNextEvent : VUIAppDocumentUpdateEvent <NSCopying>

@property (copy, nonatomic) NSSet *addedCanonicalIDs;
@property (copy, nonatomic) NSSet *removedCanonicalIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDescriptor:(id)a0;
- (id)coalescedEvent:(id)a0;
- (id)initWithAction:(unsigned long long)a0 canonicalID:(id)a1;
- (id)initWithAddedCanonicalIDs:(id)a0 removedCanonicalIDs:(id)a1;

@end
