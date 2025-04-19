@class NSDictionary, NSMutableDictionary, NSDate;

@interface WBSSavedAccountSidecarContextSpecificData : NSObject {
    NSDictionary *_originalKeychainDictionary;
    NSMutableDictionary *_sitesToLastUsedDates;
}

@property (copy, nonatomic) NSDate *lastUsedDate;
@property (readonly, nonatomic) NSDate *lastUsedDateAcrossAllSites;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithLastUsedDate:(id)a0;
- (id)lastUsedDateForSite:(id)a0;
- (void)removeLastUsedDateForSite:(id)a0;
- (void)setLastUsedDate:(id)a0 forSite:(id)a1;

@end
