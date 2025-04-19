@class GEOMapItemStorage, NSUUID, NSString, NSData;

@interface MapsSuggestionsLocationOfInterest : NSObject <MapsSuggestionsObject>

@property (copy, nonatomic) GEOMapItemStorage *mapItem;
@property (readonly, nonatomic) NSData *mapItemHandle;
@property (readonly, nonatomic) NSUUID *identifierUUID;
@property (readonly, nonatomic) NSString *identifierString;
@property (readonly, nonatomic) NSString *preferredName;
@property (readonly, nonatomic) long long *shortcutType;
@property (readonly, nonatomic) BOOL isLOIFromMeCard;
@property (readonly, nonatomic) NSString *addressIdentifier;
@property (readonly, nonatomic) long long type;
@property (nonatomic) unsigned long long visitCount;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
