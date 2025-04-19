@class NSNumber, NSString, NSURL;

@interface HMMTRMutableVendorMetadataProduct : HMMTRVendorMetadataProduct

@property (copy) NSNumber *identifier;
@property (copy) NSNumber *categoryNumber;
@property (copy) NSNumber *deviceTypeID;
@property (copy) NSString *name;
@property (copy) NSString *model;
@property (copy) NSURL *installationGuideURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
