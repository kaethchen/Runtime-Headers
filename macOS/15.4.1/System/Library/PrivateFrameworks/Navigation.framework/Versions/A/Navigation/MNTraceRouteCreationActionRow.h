@class GEODirectionsRequest, NSArray, NSError, GEODirectionsResponse;

@interface MNTraceRouteCreationActionRow : NSObject

@property (nonatomic) double requestTimestamp;
@property (nonatomic) double responseTimestamp;
@property (retain, nonatomic) GEODirectionsRequest *request;
@property (retain, nonatomic) GEODirectionsResponse *response;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSArray *anchorPoints;
@property (nonatomic) unsigned long long action;

- (void).cxx_destruct;

@end
