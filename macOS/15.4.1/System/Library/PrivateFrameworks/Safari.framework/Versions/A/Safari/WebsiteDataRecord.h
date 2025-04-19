@class NSString, NSSet, NSArray, WKWebsiteDataRecord;

@interface WebsiteDataRecord : NSObject <WebsiteDataDescriptor>

@property (readonly, nonatomic) WKWebsiteDataRecord *wkWebsiteDataRecord;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSSet *dataTypes;
@property (readonly, copy, nonatomic) NSArray *identitiesURLs;
@property (readonly, copy, nonatomic) NSString *profileIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 wkWebsiteDataRecord:(id)a1 identitiesURLs:(id)a2 profileIdentifier:(id)a3;

@end
