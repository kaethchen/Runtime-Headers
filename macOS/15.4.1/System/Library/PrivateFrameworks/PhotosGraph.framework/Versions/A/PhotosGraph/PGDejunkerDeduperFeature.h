@class NSSet;

@interface PGDejunkerDeduperFeature : NSObject <NSCopying>

@property (readonly) BOOL hasPersons;
@property (readonly) BOOL hasPeopleScenes;
@property (readonly) BOOL isVideo;
@property (readonly) NSSet *personLocalIdentifiers;
@property (readonly) NSSet *peopleScenes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)identicalSimilarity;
- (id)initWithPersonLocalIdentifiers:(id)a0 peopleScenes:(id)a1 isVideo:(BOOL)a2;

@end
