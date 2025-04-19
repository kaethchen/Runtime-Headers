@class PNRPhoneNumberResolver;

@interface TUGeoLocationMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (readonly, nonatomic) PNRPhoneNumberResolver *phoneNumberResolver;

- (id)init;
- (void).cxx_destruct;
- (id)locationForMetadataIdentifier:(id)a0;
- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;

@end
