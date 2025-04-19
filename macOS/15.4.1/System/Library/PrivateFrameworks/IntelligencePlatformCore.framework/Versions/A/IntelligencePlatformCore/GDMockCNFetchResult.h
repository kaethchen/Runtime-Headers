@class NSData;

@interface GDMockCNFetchResult : NSObject

@property (readonly, nonatomic) id value;
@property (readonly, copy, nonatomic) NSData *currentHistoryToken;

- (void).cxx_destruct;
- (id)fetchResult;
- (id)initWithValue:(id)a0 currentHistoryToken:(id)a1;

@end
