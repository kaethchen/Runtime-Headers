@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider

@property (copy, nonatomic) id /* block */ countryDialingCode;
@property (copy, nonatomic) id /* block */ firstIdentificationEntriesForEnabledExtensions;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)updateCacheWithDestinationIDs:(id)a0 withGroup:(id)a1;

@end
