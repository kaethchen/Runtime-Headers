@class NSURL, NSData, NSString;

@interface _BKAggregatedAssetData : NSObject

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSData *opf;
@property (retain, nonatomic) NSData *iTunesMetadata;
@property (retain, nonatomic) NSData *sinf;
@property (retain, nonatomic) NSString *opfPath;

- (id)init;
- (void).cxx_destruct;
- (id)_opfMetadataWithCover:(BOOL)a0 error:(id *)a1;
- (id)_sinfOptionsWithError:(id *)a0;
- (id)initWithURL:(id)a0 opfData:(id)a1 path:(id)a2;
- (id)metadataWithPreloadedMetadata:(id)a0 includeCover:(BOOL)a1 error:(id *)a2;

@end
