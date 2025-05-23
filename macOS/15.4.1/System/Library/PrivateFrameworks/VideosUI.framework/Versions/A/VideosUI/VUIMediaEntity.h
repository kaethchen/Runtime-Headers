@class NSDate, NSString, NSSet, NSMutableDictionary, VUIContentRating, VUIMediaEntityKind, NSObject, VUIMediaEntityType, NSNumber;
@protocol VUIMediaEntityIdentifierInternal, VUIMediaEntityIdentifier;

@interface VUIMediaEntity : NSObject

@property (copy, nonatomic) NSObject<VUIMediaEntityIdentifierInternal> *identifierInternal;
@property (retain, nonatomic) NSMutableDictionary *firstAccessPropertiesCache;
@property (nonatomic) BOOL cachesPropertiesOnFirstAccess;
@property (readonly, nonatomic) VUIMediaEntityKind *kind;
@property (readonly, nonatomic) NSSet *requestedProperties;
@property (readonly, copy, nonatomic) NSString *sortTitle;
@property (readonly, copy, nonatomic) VUIMediaEntityType *type;
@property (readonly, copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *identifier;
@property (readonly, copy, nonatomic) NSNumber *isLocal;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *genreTitle;
@property (readonly, copy, nonatomic) NSString *contentDescription;
@property (readonly, copy, nonatomic) NSNumber *resolution;
@property (readonly, copy, nonatomic) NSNumber *colorCapability;
@property (readonly, copy, nonatomic) NSNumber *audioCapability;
@property (readonly, copy, nonatomic) NSNumber *HLSResolution;
@property (readonly, copy, nonatomic) NSNumber *HLSColorCapability;
@property (readonly, copy, nonatomic) NSNumber *HLSAudioCapability;
@property (readonly, copy, nonatomic) NSDate *addedDate;
@property (readonly, copy, nonatomic) NSDate *releaseDate;
@property (readonly, copy, nonatomic) NSNumber *releaseYear;
@property (readonly, copy, nonatomic) NSString *coverArtImageIdentifier;
@property (readonly, copy, nonatomic) NSNumber *storeID;
@property (readonly, copy, nonatomic) NSNumber *purchaseHistoryID;
@property (copy, nonatomic) NSNumber *playedState;
@property (readonly, copy, nonatomic) NSString *canonicalID;
@property (readonly, nonatomic) BOOL markedAsDeleted;
@property (readonly, copy, nonatomic) NSString *brandID;
@property (readonly, copy, nonatomic) NSString *brandName;
@property (readonly, copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *showIdentifier;
@property (readonly, copy, nonatomic) NSString *showTitle;
@property (readonly, copy, nonatomic) NSNumber *seasonNumber;
@property (nonatomic, getter=hasLocalChanges) BOOL localChanges;
@property (readonly, copy, nonatomic) VUIContentRating *contentRating;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_propertyValueForKey:(id)a0;
- (id)_propertyValueWithBlock:(id /* block */)a0 forKey:(id)a1;
- (id)_defaultValueForPropertyDescriptor:(id)a0;
- (BOOL)_didRequestPropertyWithKey:(id)a0;
- (id)_valueForPropertyDescriptor:(id)a0;
- (BOOL)isFetchedPropertiesEqualToFetchedMediaEntity:(id)a0;
- (void)populateMetadata;

@end
