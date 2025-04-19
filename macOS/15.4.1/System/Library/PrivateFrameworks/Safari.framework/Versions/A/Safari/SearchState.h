@class NSString, NSArray, NSURL, NSDate;

@interface SearchState : NSObject

@property (readonly, copy, nonatomic) NSString *query;
@property (retain, nonatomic) NSURL *resultURL;
@property (readonly, nonatomic) NSDate *searchDate;
@property (readonly, copy, nonatomic) NSArray *parsecSearchResults;

- (void).cxx_destruct;
- (id)initWithQuery:(id)a0 parsecSearchResults:(id)a1 resultURL:(id)a2 searchDate:(id)a3;

@end
