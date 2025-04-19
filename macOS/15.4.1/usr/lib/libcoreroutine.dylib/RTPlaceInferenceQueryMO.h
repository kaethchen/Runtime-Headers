@class NSUUID, NSString, RTMapItemMO, NSDate, NSNumber;

@interface RTPlaceInferenceQueryMO : NSManagedObject

@property (nonatomic) double confidence;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSNumber *fidelityPolicyMask;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSDate *locationDate;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (retain, nonatomic) NSNumber *locationReferenceFrame;
@property (nonatomic) double locationUncertainty;
@property (copy, nonatomic) NSUUID *mapItemIdentifier;
@property (copy, nonatomic) NSNumber *placeType;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSNumber *userType;
@property (copy, nonatomic) NSNumber *userTypeSource;
@property (retain, nonatomic) RTMapItemMO *cachedMapItem;

+ (id)fetchRequest;
+ (id)managedObjectWithPlaceInferenceQuery:(id)a0 inManagedObjectContext:(id)a1;

- (void).cxx_destruct;
- (id)mapItem;
- (void)setMapItem:(id)a0;

@end
