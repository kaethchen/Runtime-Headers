@class NSString, GEOResource, NSURL;

@interface GEOGeographicMetadataResourceFetcher : NSObject <GEOGeographicMetadataFetcher> {
    NSString *_filename;
    GEOResource *_resource;
    NSURL *_fileURL;
    id /* block */ _responseBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
