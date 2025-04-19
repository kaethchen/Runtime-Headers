@class NSArray, NSDictionary;

@interface MTCallerSuppliedFields : NSObject

@property (retain) NSArray *eventData;
@property (retain) NSDictionary *cachedMergedFields;

- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithEventData:(id)a0;
- (id)initWithPageId:(id)a0 pageType:(id)a1 pageContext:(id)a2 eventData:(id)a3;
- (id)mergedFields;
- (id)valueForCallerSuppliedField:(id)a0;

@end
