@class _SFPBWatchListButtonItem, _SFPBPlayWatchListItemButtonItem, _SFPBAppAutoShortcutsButtonItem, _SFPBContactButtonItem, _SFPBSportsFollowButtonItem, _SFPBPlayAudioButtonItem, _SFPBStoreButtonItem, _SFPBCoreSpotlightButtonItem, _SFPBButtonItemAppearance, _SFPBCommandButtonItem, NSData, NSString;

@interface _SFPBButtonItem : PBCodable <_SFPBButtonItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _SFPBCommandButtonItem *commandButtonItem;
@property (retain, nonatomic) _SFPBContactButtonItem *contactButtonItem;
@property (retain, nonatomic) _SFPBCoreSpotlightButtonItem *coreSpotlightButtonItem;
@property (retain, nonatomic) _SFPBWatchListButtonItem *watchListButtonItem;
@property (retain, nonatomic) _SFPBAppAutoShortcutsButtonItem *appActionsButtonItem;
@property (retain, nonatomic) _SFPBSportsFollowButtonItem *sportsFollowButtonItem;
@property (retain, nonatomic) _SFPBPlayWatchListItemButtonItem *playWatchListItemButtonItem;
@property (retain, nonatomic) _SFPBPlayAudioButtonItem *playAudioButtonItem;
@property (retain, nonatomic) _SFPBStoreButtonItem *storeButtonItem;
@property (retain, nonatomic) _SFPBButtonItemAppearance *buttonAppearance;
@property (nonatomic) unsigned long long uniqueId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;

@end
