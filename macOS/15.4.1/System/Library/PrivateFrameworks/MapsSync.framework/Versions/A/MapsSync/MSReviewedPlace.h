@class MSCommunityID, NSData, NSDate, NSNumber, MSAnonymousCredential;

@interface MSReviewedPlace : MapsSync.MapsSyncObject {
    void /* unknown type, empty encoding */ _hasUserReviewed;
    void /* unknown type, empty encoding */ _lastSuggestedReviewDate;
    void /* unknown type, empty encoding */ _latitude;
    void /* unknown type, empty encoding */ _longitude;
    void /* unknown type, empty encoding */ _mapItemIdComparableRepresentation;
    void /* unknown type, empty encoding */ _mapItemLastRefreshed;
    void /* unknown type, empty encoding */ _mapItemStorage;
    void /* unknown type, empty encoding */ _muid;
    void /* unknown type, empty encoding */ _positionIndex;
    void /* unknown type, empty encoding */ _rating;
    void /* unknown type, empty encoding */ _resultProviderIdentifier;
    void /* unknown type, empty encoding */ _uploadedPhotosCount;
    void /* unknown type, empty encoding */ _version;
}

@property (class, nonatomic, readonly) Class managedClass;

@property (nonatomic) BOOL hasUserReviewed;
@property (nonatomic, copy) NSDate *lastSuggestedReviewDate;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, copy) NSData *mapItemIdComparableRepresentation;
@property (nonatomic, copy) NSDate *mapItemLastRefreshed;
@property (nonatomic, copy) NSData *mapItemStorage;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) long long positionIndex;
@property (nonatomic, retain) NSNumber *rating;
@property (nonatomic, retain) NSNumber *resultProviderIdentifier;
@property (nonatomic) int uploadedPhotosCount;
@property (nonatomic) short version;
@property (nonatomic, readonly) MSAnonymousCredential *anonymousCredential;
@property (nonatomic, readonly) MSCommunityID *communityID;

+ (id)strippedMapItemWith:(id)a0;

- (void).cxx_destruct;
- (void)setCommunityID:(id)a0;
- (id)initWithHasUserReviewed:(BOOL)a0 lastSuggestedReviewDate:(id)a1 latitude:(id)a2 longitude:(id)a3 mapItemIdComparableRepresentation:(id)a4 mapItemLastRefreshed:(id)a5 mapItemStorage:(id)a6 muid:(unsigned long long)a7 positionIndex:(long long)a8 rating:(id)a9 resultProviderIdentifier:(id)a10 uploadedPhotosCount:(int)a11 version:(short)a12;
- (id)initWithObject:(id)a0 store:(id)a1 lazyLoad:(BOOL)a2;
- (id)initWithStore:(id)a0 hasUserReviewed:(BOOL)a1 lastSuggestedReviewDate:(id)a2 latitude:(id)a3 longitude:(id)a4 mapItemIdComparableRepresentation:(id)a5 mapItemLastRefreshed:(id)a6 mapItemStorage:(id)a7 muid:(unsigned long long)a8 positionIndex:(long long)a9 rating:(id)a10 resultProviderIdentifier:(id)a11 uploadedPhotosCount:(int)a12 version:(short)a13;
- (void)setAnonymousCredential:(id)a0;
- (void)setPropertiesUnsafeWithManagedObject:(id)a0 lazyLoad:(BOOL)a1;

@end
