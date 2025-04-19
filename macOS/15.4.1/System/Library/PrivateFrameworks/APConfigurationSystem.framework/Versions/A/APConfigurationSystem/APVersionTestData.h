@class NSArray, NSString;

@interface APVersionTestData : NSObject <APVersionDatasource>

@property (retain, nonatomic) NSArray *testURLS;
@property (retain, nonatomic) NSArray *directoryURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)subdirectoriesAtURL:(id)a0;

@end
