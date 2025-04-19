@class NSArray, NSString;

@interface SCWatchlistAddDefaultSymbolsCommand : NSObject <SCWZoneCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *symbols;
@property (readonly, nonatomic) BOOL deferUpload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)executeWithZone:(id)a0;
- (BOOL)shouldDeferUpload;
- (id)initWithSymbols:(id)a0 deferUpload:(BOOL)a1;

@end
