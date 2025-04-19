@class MKMapFeatureAnnotation, MKMapItemIdentifier;
@protocol MKMapServiceTicket;

@interface MKMapItemRequest : NSObject {
    id<MKMapServiceTicket> _ticket;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _loading;
    BOOL _cancelled;
}

@property (readonly, nonatomic) MKMapItemIdentifier *mapItemIdentifier;
@property (readonly, nonatomic) MKMapFeatureAnnotation *mapFeatureAnnotation;
@property (readonly, nonatomic) MKMapFeatureAnnotation *featureAnnotation;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithMapItemIdentifier:(id)a0;
- (void)_handleMapItems:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)_performLookupRequestWithMapItemIdentifier:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)getMapItemWithCompletionHandler:(id /* block */)a0;
- (void)getMapItemWithQueue:(id)a0 completionHandler:(id /* block */)a1;

@end
