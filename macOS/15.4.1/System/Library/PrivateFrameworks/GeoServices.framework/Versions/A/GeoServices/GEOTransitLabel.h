@class NSString, GEOPDTransitLabel;
@protocol GEOTransitArtworkDataSource;

@interface GEOTransitLabel : NSObject <GEOTransitLabelItem> {
    GEOPDTransitLabel *_transitLabel;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *labelString;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> labelArtwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEncodedData:(id)a0;

@end
