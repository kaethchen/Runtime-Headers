@class RTMapItemExtendedAttributesMO, RTAddressMO, NSString, NSData, RTLearnedPlaceMO, NSNumber, NSUUID;

@interface RTMapItemMO : RTCloudManagedObject

@property (retain, nonatomic) NSData *geoMapItemHandle;
@property (copy, nonatomic) NSNumber *mapItemSource;
@property (retain, nonatomic) RTAddressMO *address;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSNumber *uncertainty;
@property (copy, nonatomic) NSNumber *referenceFrame;
@property (copy, nonatomic) NSNumber *mapItemPlaceType;
@property (copy, nonatomic) NSNumber *muid;
@property (copy, nonatomic) NSNumber *resultProviderID;
@property (retain, nonatomic) RTLearnedPlaceMO *place;
@property (copy, nonatomic) NSUUID *extendedAttributesIdentifier;
@property (copy, nonatomic) NSString *displayLanguage;
@property (nonatomic) BOOL disputed;
@property (retain, nonatomic) RTMapItemExtendedAttributesMO *cachedExtendedAttributes;

+ (id)fetchRequest;
+ (id)managedObjectWithMapItem:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithMapItem:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;
+ (id)mapItemForIdentifier:(id)a0 error:(id *)a1;
+ (void)updateDatabaseWithMapItem:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;

- (id)description;
- (void).cxx_destruct;
- (void)didSave;
- (id)extendedAttributes;
- (void)setExtendedAttributes:(id)a0;

@end
