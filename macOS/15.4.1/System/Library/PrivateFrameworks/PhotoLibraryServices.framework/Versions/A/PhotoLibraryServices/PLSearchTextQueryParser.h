@class PSITokenizer;
@protocol PSIQueryDelegate;

@interface PLSearchTextQueryParser : NSObject

@property (retain, nonatomic) id<PSIQueryDelegate> db;
@property (retain, nonatomic) PSITokenizer *psiTokenizer;

+ (id)_dateFilterWithQPDateInfo:(id)a0;
+ (void)enumerateDatesForString:(id)a0 resultsHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (id)parseText:(id)a0;

@end
