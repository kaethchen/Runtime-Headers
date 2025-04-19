@class NSString, NSArray;

@interface SUOSUTrain : NSObject

@property (retain) NSString *trainName;
@property (retain) NSString *productMarketingVersion;
@property (retain) NSArray *servers;

+ (id)productMarketingVersionForTrain:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
