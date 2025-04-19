@class NSString, NSFileManager;

@interface APVersionData : NSObject <APVersionDatasource>

@property (retain, nonatomic) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)subdirectoriesAtURL:(id)a0;

@end
