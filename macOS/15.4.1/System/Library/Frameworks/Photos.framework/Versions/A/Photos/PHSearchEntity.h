@class NSString, NSArray;

@interface PHSearchEntity : PHObject {
    NSString *_synonymsString;
}

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *searchEntityIdentifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) double rankingScore;
@property (copy, nonatomic) NSArray *synonyms;

+ (id)fetchSearchEntitiesWithOptions:(id)a0;
+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsSharingComposition;
+ (BOOL)managedObjectSupportsTrashedState;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (double)confidenceForMoment:(id)a0;
- (id)dateIntervalForMoment:(id)a0;
- (id)initWithNodeContainer:(id)a0 photoLibrary:(id)a1;

@end
