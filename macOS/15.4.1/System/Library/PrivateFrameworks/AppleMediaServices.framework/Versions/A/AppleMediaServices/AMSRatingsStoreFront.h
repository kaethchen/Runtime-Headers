@class NSString, NSArray;

@interface AMSRatingsStoreFront : NSObject

@property (readonly) NSString *defaultLanguage;
@property (readonly) unsigned long long mediaType;
@property (readonly) NSString *name;
@property (readonly) NSArray *ratingSystems;
@property (readonly) NSString *storeFront;
@property (readonly) NSString *storeFrontID;
@property (readonly) NSArray *supportedLanguages;

+ (id)storeFrontWithDictionary:(id)a0 mediaType:(unsigned long long)a1;
+ (id)storeFrontWithDictionary:(id)a0 mediaType:(unsigned long long)a1 andStoreFront:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 mediaType:(unsigned long long)a1;
- (id)initWithDictionary:(id)a0 mediaType:(unsigned long long)a1 andStoreFront:(id)a2;

@end
