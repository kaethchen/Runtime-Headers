@class NSDictionary, NSString;

@interface VNMultiDetectorOriginalRequestInfo : NSObject

@property (class, readonly) NSDictionary *originatingRequestSpecifierToDetectorClassMap;

@property (readonly, nonatomic) NSString *originatingRequestSpecifierKey;
@property (readonly, nonatomic) unsigned long long originalRequestResultsIndex;

+ (id)requestClassNameFromRequestKey:(id)a0;
+ (id)requestKeyFromRequest:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithOriginatingRequestSpecifierProcessingOptionKey:(id)a0 originalRequestResultsIndex:(unsigned long long)a1;

@end
