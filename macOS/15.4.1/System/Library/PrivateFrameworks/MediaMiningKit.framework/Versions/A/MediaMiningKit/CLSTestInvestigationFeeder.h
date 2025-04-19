@class NSArray;

@interface CLSTestInvestigationFeeder : CLSInvestigationFeeder {
    NSArray *_items;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)itemAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfItems;
- (id)initWithItems:(id)a0;
- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)approximateLocation;
- (id)localEndDate;
- (id)localStartDate;
- (id)universalEndDate;
- (id)universalStartDate;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)localEndDateComponents;
- (id)localStartDateComponents;

@end
