@class NSString, CNContact, MKMapItem, EKCalendarItem;

@interface _MKMapItemPlaceItem : NSObject <_MKPlaceItem> {
    MKMapItem *_mapItem;
    unsigned long long _options;
    BOOL _isIntermediateMapItem;
    NSString *_preferredName;
    NSString *_preferredSecondaryName;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *secondaryName;
@property (readonly, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) BOOL isIntermediateMapItem;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) BOOL representsPerson;
@property (readonly, nonatomic) EKCalendarItem *calendarItem;
@property (readonly, nonatomic) BOOL isContactPersisted;
@property (readonly, nonatomic) BOOL hasContactOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)placeItemWithMapItem:(id)a0 options:(unsigned long long)a1;
+ (id)placeItemWithMapItem:(id)a0 options:(unsigned long long)a1 isIntermediateMapItem:(BOOL)a2;
+ (id)placeItemWithMapItem:(id)a0 options:(unsigned long long)a1 isIntermediateMapItem:(BOOL)a2 preferredName:(id)a3 preferredSecondaryName:(id)a4;

- (void).cxx_destruct;
- (void)setIsSuggestedFavorite:(BOOL)a0;

@end
