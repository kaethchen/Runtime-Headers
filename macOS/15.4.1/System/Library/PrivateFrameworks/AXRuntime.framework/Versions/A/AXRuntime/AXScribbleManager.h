@class AXScribbleElement;

@interface AXScribbleManager : NSObject

@property (nonatomic) long long lastSearchPoint;
@property (retain, nonatomic) AXScribbleElement *lastFetchedElement;

- (id)init;
- (void).cxx_destruct;
- (void)hideSelectedElement;
- (void)foundScribbleElement:(id)a0 atSearchPoint:(long long)a1;
- (BOOL)isUniqueElement:(id)a0;
- (long long)nextSearchPoint:(BOOL)a0;
- (long long)nsStringToSearchPoint:(id)a0;
- (id)searchPointToNSString:(long long)a0;

@end
