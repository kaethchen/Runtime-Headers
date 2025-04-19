@class AXPSignpostParserConfiguration;

@interface AXPSignpostParser : NSObject

@property (copy, nonatomic) AXPSignpostParserConfiguration *configuration;

- (id)init;
- (void).cxx_destruct;
- (id)_wrappedEventFromSignpostEvent:(id)a0;
- (id)_allSignpostObjectsFromTestArchiveWithSubsystemCategoryFilter:(id)a0 archivePath:(id)a1;
- (id)_signpostEventResultsFromSupportObjects:(id)a0;
- (id)parseSignposts;

@end
