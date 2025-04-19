@class NSArray;

@interface _STKSearchResult : NSObject {
    void /* unknown type, empty encoding */ results;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ originalQuery;
@property (nonatomic, readonly) NSArray *results;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOriginalQuery:(id)a0 results:(id)a1;

@end
