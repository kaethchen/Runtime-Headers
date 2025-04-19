@class NSArray, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface SGTDateSuggester : SGTSuggester {
    NSArray *attributeNames;
    NSSet *attributeNamesAsSet;
    BOOL future;
    NSObject<OS_dispatch_queue> *queryQueue;
    long long queryID;
}

+ (id)dateCategory;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_identifier;
- (void)_incrementQueryID;
- (unsigned long long)_queryID;
- (id)_suggestionWithDay:(long long)a0 month:(long long)a1 year:(long long)a2 alreadyFound:(id)a3 attributeNames:(id)a4;
- (id)_suggestionWithDisplayName:(id)a0 attributeNames:(id)a1 values:(id)a2 scope:(long long)a3 representedObjectAsPlist:(id)a4;
- (id)defaultsDateResultsForInput:(id)a0 attributeNames:(id)a1;
- (id)initWithAttributeNames:(id)a0;
- (id)initWithAttributeNames:(id)a0 prefersFutureDates:(BOOL)a1;
- (id)nlSearchDateResultsForInput:(id)a0 parseResult:(id)a1 attributeNames:(id)a2;
- (void)setInput:(id)a0 withGroup:(id)a1;

@end
