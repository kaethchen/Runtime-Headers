@interface ATXCoreDuetContextHelper : NSObject

@property (retain, nonatomic) id context;

- (id)init;
- (void).cxx_destruct;
- (id)fetchDataDictionaryForKeyPath:(id)a0;
- (id)lastModifiedDateForKeyPath:(id)a0;

@end
