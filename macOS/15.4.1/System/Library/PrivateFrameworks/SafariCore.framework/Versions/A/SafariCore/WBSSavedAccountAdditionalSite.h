@class NSString;

@interface WBSSavedAccountAdditionalSite : NSObject

@property (readonly, nonatomic) NSString *site;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithSite:(id)a0;

@end
