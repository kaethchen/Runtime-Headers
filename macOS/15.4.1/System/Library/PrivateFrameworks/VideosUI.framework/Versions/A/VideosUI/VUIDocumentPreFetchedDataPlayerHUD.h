@class NSString, NSArray;

@interface VUIDocumentPreFetchedDataPlayerHUD : VUIDocumentPreFetchedData

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *tabId;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isMultiviewPlayer;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) BOOL playFromStart;
@property (nonatomic) BOOL includeMultiviewButton;
@property (retain, nonatomic) NSArray *excludedCanonicals;
@property (retain, nonatomic) NSArray *multiviewIdentifiers;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)jsonData;

@end
