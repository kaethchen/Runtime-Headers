@class NSString;

@interface LACSharedModeDataSourceNullAdapter : NSObject <LACSharedModeDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchSharedModeWithOptions:(id)a0 completion:(id /* block */)a1;

@end
