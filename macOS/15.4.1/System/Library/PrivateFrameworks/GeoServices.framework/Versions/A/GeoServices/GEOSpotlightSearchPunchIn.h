@class NSString, GEOPDSPunchInHints;

@interface GEOSpotlightSearchPunchIn : NSObject <NSCopying> {
    GEOPDSPunchInHints *_punchInHints;
    NSString *_spotlightEncodedString;
}

@property (readonly, nonatomic) NSString *originalSearchQuery;
@property (readonly, nonatomic) NSString *completedSearchQuery;
@property (readonly, nonatomic) NSString *spotlightEncodedString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithEncodedString:(id)a0;

@end
