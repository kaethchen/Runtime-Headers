@class NSString;

@interface _IMDOpenGraphSpotlightMappingInfo : NSObject

@property (retain, nonatomic) NSString *ogType;
@property (retain, nonatomic) NSString *prefix;
@property (retain, nonatomic) NSString *linkType;
@property (retain, nonatomic) NSString *linkSubType;

+ (id)infoForLinkMetadata:(id)a0;
+ (id)infoForOGType:(id)a0;

- (void).cxx_destruct;
- (id)initWithOGType:(id)a0 indexer:(id)a1;

@end
