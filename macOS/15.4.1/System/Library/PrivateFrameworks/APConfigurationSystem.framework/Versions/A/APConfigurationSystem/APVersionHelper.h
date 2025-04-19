@protocol APVersionDatasource;

@interface APVersionHelper : NSObject

@property (retain, nonatomic) id<APVersionDatasource> datasource;
@property (readonly, nonatomic) long long systemVersion;

+ (id)versionNumberFromJSONFileAtPath:(id)a0;

- (void).cxx_destruct;
- (long long)_getVersionForNodesAtDirectoryPath:(id)a0;
- (id)_versionInDirectoryWithURLs:(id)a0;
- (id)initWithDatasource:(id)a0;

@end
