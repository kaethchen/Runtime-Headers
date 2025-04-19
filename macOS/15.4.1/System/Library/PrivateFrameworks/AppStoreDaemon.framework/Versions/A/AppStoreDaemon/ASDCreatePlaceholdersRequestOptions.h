@class NSArray;

@interface ASDCreatePlaceholdersRequestOptions : ASDRequestOptions

@property (nonatomic) BOOL completeDataPromise;
@property (nonatomic) BOOL createAsMobileBackup;
@property (readonly, nonatomic) NSArray *items;

- (id)init;
- (void).cxx_destruct;
- (id)initWithApplicationMetadata:(id)a0;

@end
