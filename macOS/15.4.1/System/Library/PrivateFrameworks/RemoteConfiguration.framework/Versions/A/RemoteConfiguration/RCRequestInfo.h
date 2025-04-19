@class RCUnfairLock, NSString, NSMutableDictionary, NSURL, NSArray, NSDictionary, RCCachePolicy;

@interface RCRequestInfo : NSObject

@property (readonly, nonatomic) NSMutableDictionary *mutableAdditionalFields;
@property (retain, nonatomic) RCUnfairLock *accessLock;
@property (readonly, copy, nonatomic) NSString *requestKey;
@property (readonly, copy, nonatomic) NSString *responseKey;
@property (readonly, nonatomic) NSURL *fallbackURL;
@property (readonly, nonatomic) unsigned long long requestType;
@property (readonly, nonatomic) NSArray *additionalChangeTags;
@property (readonly, nonatomic) NSString *requestCacheKey;
@property (readonly) NSDictionary *allAdditionalFields;
@property (readonly, nonatomic) RCCachePolicy *cachePolicy;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 requestType:(unsigned long long)a3 additionalChangeTags:(id)a4;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 requestType:(unsigned long long)a3 additionalChangeTags:(id)a4 requestCacheKey:(id)a5;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 requestType:(unsigned long long)a3 additionalChangeTags:(id)a4 requestCacheKey:(id)a5 cachePolicy:(id)a6;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 requestType:(unsigned long long)a3 additionalChangeTags:(id)a4 requestFeedType:(unsigned long long)a5;
- (id)initWithRequestKey:(id)a0 responseKey:(id)a1 fallbackURL:(id)a2 requestType:(unsigned long long)a3 additionalChangeTags:(id)a4 requestFeedType:(unsigned long long)a5 cachePolicy:(id)a6;
- (void)setValue:(id)a0 forAdditionalField:(id)a1;

@end
