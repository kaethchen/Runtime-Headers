@class NSNumber, NSString, GeoKitPlace;

@interface GEOPlaceName : NSManagedObject

@property (retain, nonatomic) NSNumber *es;
@property (retain, nonatomic) NSNumber *fi;
@property (retain, nonatomic) NSNumber *sv;
@property (retain, nonatomic) NSNumber *pt_br;
@property (retain, nonatomic) NSNumber *nl;
@property (retain, nonatomic) NSNumber *zh_tw;
@property (retain, nonatomic) NSNumber *fr;
@property (retain, nonatomic) NSNumber *en;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *da;
@property (retain, nonatomic) NSNumber *it;
@property (retain, nonatomic) NSNumber *ja;
@property (retain, nonatomic) NSNumber *ko;
@property (retain, nonatomic) NSNumber *no;
@property (retain, nonatomic) NSNumber *ru;
@property (retain, nonatomic) NSNumber *zh;
@property (retain, nonatomic) NSNumber *pt;
@property (retain, nonatomic) NSNumber *pl;
@property (retain, nonatomic) NSNumber *de;
@property (retain, nonatomic) GeoKitPlace *place;
@property (retain, nonatomic) NSNumber *th;
@property (retain, nonatomic) NSNumber *tr;
@property (retain, nonatomic) NSNumber *ca;
@property (retain, nonatomic) NSNumber *hr;
@property (retain, nonatomic) NSNumber *cs;
@property (retain, nonatomic) NSNumber *el;
@property (retain, nonatomic) NSNumber *he;
@property (retain, nonatomic) NSNumber *hu;
@property (retain, nonatomic) NSNumber *ro;
@property (retain, nonatomic) NSNumber *sk;
@property (retain, nonatomic) NSNumber *uk;
@property (retain, nonatomic) NSNumber *ar;
@property (retain, nonatomic) NSNumber *id;
@property (retain, nonatomic) NSNumber *ms;
@property (retain, nonatomic) NSNumber *vi;

+ (id)_predicateToFetchNameEqualToString:(id)a0 nameKeyPath:(id)a1 languageKeyPath:(id)a2;
+ (id)_namesWithPredicate:(id)a0 managedObjectContext:(id)a1 sortDescriptors:(id)a2 fetchLimit:(unsigned long long)a3;
+ (id)_placeArrayFromPlaceNameArray:(id)a0 resultType:(unsigned long long)a1;
+ (id)_predicateToFetchNameBegginningWithString:(id)a0 nameKeyPath:(id)a1 languageKeyPath:(id)a2;
+ (SEL)_userLanguageSelectorForManagedObjectContext:(id)a0;
+ (SEL)_userLanguageSelectorForName:(id)a0;
+ (id)placesWhoseNameStartsWith:(id)a0 managedObjectContext:(id)a1 fetchLimit:(unsigned long long)a2 resultType:(unsigned long long)a3;
+ (SEL)selectorForLocalization:(id)a0;
+ (SEL)userLanguageSelectorForManagedObjectContext:(id)a0;

- (id)dumpDictionary;

@end
