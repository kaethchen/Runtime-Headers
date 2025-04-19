@class NSArray, NSString;
@protocol GEOMapServiceTicket;

@interface CLSBusinessGeoServiceQuery : NSObject <CLSQueryProtocol>

@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, copy, nonatomic) NSArray *muids;
@property (readonly, nonatomic) id<GEOMapServiceTicket> ticket;
@property (readonly, nonatomic) NSArray *resultingMapItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)prepareForRetry;
- (void)submitWithHandler:(id /* block */)a0;
- (id)initWithMUIDs:(id)a0;

@end
