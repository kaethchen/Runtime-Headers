@class GEOPDSSessionUserActionMetadata;

@interface GEOSessionUserActionMetadata : NSObject {
    GEOPDSSessionUserActionMetadata *_actionMetadata;
    double _analyticsShortSessionCreateTime;
}

@property (readonly, nonatomic) GEOPDSSessionUserActionMetadata *sessionUserActionMetadata;

- (id)init;
- (void).cxx_destruct;
- (void)captureSearchAction:(int)a0 searchTarget:(int)a1 maxCountToMaintain:(unsigned long long)a2;

@end
