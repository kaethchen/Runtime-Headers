@class NSString, NSMutableArray;
@protocol SidebarContentFilterDelegate;

@interface SidebarContentFilter : NSObject

@property (retain, nonatomic) NSMutableArray *matches;
@property (weak, nonatomic) id<SidebarContentFilterDelegate> delegate;
@property (retain, nonatomic) NSString *searchString;
@property (nonatomic) BOOL resultsReady;

+ (id)searchTermsFromString:(id)a0;
+ (BOOL)string:(id)a0 matchesSearchTerms:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)filterItems:(id)a0 withSearchString:(id)a1 itemsDidChange:(BOOL)a2;
- (void)removeObjectsFromResults:(id)a0;

@end
