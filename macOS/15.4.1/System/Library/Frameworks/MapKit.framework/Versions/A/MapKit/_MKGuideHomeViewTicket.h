@class NSString, GEOMapServiceTraits;
@protocol GEOMapServiceGuideHomeViewTicket;

@interface _MKGuideHomeViewTicket : NSObject <MKMapServiceGuideHomeViewTicket> {
    id<GEOMapServiceGuideHomeViewTicket> _ticket;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (void)submitWithHandler:(id /* block */)a0 networkActivity:(id /* block */)a1;
- (id)initWithTicket:(id)a0;
- (void)submitWithCallbackQueue:(id)a0 handler:(id /* block */)a1 networkActivity:(id /* block */)a2;

@end
