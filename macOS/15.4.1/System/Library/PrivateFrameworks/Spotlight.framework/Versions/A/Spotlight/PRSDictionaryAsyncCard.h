@class NSString;

@interface PRSDictionaryAsyncCard : SFCard

@property (readonly) NSString *dictionaryId;
@property (readonly) NSString *query;

- (void).cxx_destruct;
- (void)loadCardSectionsWithCompletionHandler:(id /* block */)a0;
- (id)initWithDictionaryId:(id)a0 query:(id)a1;

@end
