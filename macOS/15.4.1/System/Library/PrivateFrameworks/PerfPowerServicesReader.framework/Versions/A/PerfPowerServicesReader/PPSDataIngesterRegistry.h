@class NSMutableDictionary;

@interface PPSDataIngesterRegistry : NSObject

@property (retain) NSMutableDictionary *dataIngesters;

+ (id)sharedInstance;
+ (id)_stringForFilepath:(id)a0 requestType:(long long)a1;
+ (id)dataIngesterForFilepath:(id)a0 requestType:(long long)a1;
+ (void)releaseDataIngesterForFilepath:(id)a0 requestType:(long long)a1;

- (id)init;
- (void).cxx_destruct;

@end
