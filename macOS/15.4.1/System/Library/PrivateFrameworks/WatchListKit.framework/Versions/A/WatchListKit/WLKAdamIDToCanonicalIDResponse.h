@class NSString;

@interface WLKAdamIDToCanonicalIDResponse : NSObject

@property (readonly, copy, nonatomic) NSString *canonicalID;
@property (readonly, copy, nonatomic) NSString *showID;
@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, copy, nonatomic) NSString *type;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
