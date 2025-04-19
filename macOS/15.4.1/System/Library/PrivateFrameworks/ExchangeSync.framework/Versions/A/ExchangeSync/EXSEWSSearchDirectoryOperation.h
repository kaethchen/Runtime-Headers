@class NSArray, NSString;

@interface EXSEWSSearchDirectoryOperation : EXSEWSOperation

@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSString *searchQuery;
@property (nonatomic) BOOL includeFullContactData;

+ (id)log;

- (void).cxx_destruct;
- (BOOL)executeWithChangeItem:(id)a0 error:(id *)a1;

@end
