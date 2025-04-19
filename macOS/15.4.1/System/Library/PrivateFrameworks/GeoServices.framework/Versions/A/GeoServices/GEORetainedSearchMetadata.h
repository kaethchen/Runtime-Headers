@class NSString, GEOPDRetainedSearchMetadata;

@interface GEORetainedSearchMetadata : NSObject <NSCopying> {
    GEOPDRetainedSearchMetadata *_retainedSearchMetadata;
}

@property (readonly, nonatomic, getter=_query) NSString *query;
@property (readonly, nonatomic) NSString *sourceAppID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRetainedSearchMetadata:(id)a0;
- (id)_retainedSearchMetadata;

@end
