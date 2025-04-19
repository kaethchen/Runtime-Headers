@class GEOPDSSearchSessionData;

@interface GEOSearchSessionData : NSObject {
    double _analyticsShortSessionCreateTime;
}

@property (readonly, nonatomic) GEOPDSSearchSessionData *searchSessionData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSearchSessionData:(id)a0;
- (id)updateWithSearchSessionData:(id)a0;

@end
