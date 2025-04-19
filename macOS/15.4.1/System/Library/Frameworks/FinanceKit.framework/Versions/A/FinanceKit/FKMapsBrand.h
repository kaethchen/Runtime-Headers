@class NSURL;

@interface FKMapsBrand : FKMapsItem <NSCopying>

@property (copy, nonatomic) NSURL *logoURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMUID:(unsigned long long)a0 resultProviderIdentifier:(int)a1 name:(id)a2 phoneNumber:(id)a3 url:(id)a4 heroImageURL:(id)a5 heroImageAttributionName:(id)a6 category:(unsigned long long)a7 mapsCategoryIdentifier:(id)a8 encodedStylingInfo:(id)a9 businessChatURL:(id)a10 lastProcessedDate:(id)a11 logoURL:(id)a12;

@end
